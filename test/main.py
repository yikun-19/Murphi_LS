#! python3

import subprocess as sp
from multiprocessing.dummy import Pool as ThreadPool
import csv
import re

mu_compile = '../src/mu'
mu_include = '../include'

mu_compile_old = '../../cmurphi5.5.0/src/mu'
mu_include_old = '../../cmurphi5.5.0/include'


invs_list = []
# split every invariant from invs.m
def get_all_invs(dir_path, inv_file_name):
    
    file = open(dir_path + inv_file_name, "r")
    invs = file.read()   # transfer text to string 

    global invs_list
    invs_list = invs.split('invariant ')
    for i in range(1, len(invs_list)):

        invs_list[i] = '------check invariant\ninvariant ' + str(invs_list[i])  # update for list
    
    file.close()


mu_file = ''
# write no.x invariant into murphi file
def write_inv(dir_path, mu_file_name, no):

    global mu_file
    if mu_file == '':
        mu_file_ptr = open(dir_path + mu_file_name + '.bak', "r")
        mu_file = mu_file_ptr.read()
        mu_file_ptr.close()

    mu_file_handle = open(dir_path + mu_file_name + '.m', "w")

    # write new invariant
    mu_file_handle.write(mu_file + invs_list[no])

    mu_file_handle.close()


def runLocalSearch(dir_path, mu_file_name, file_handle):
    try:
        sp.run(['run.sh', mu_file_name, mu_compile, mu_include], cwd=dir_path, stdout=file_handle, timeout=3600) # cutoff time
    except:
        file_handle.write("Timeout.\n")


# hold the checking process for a murphi file
def check_murphi_file(dir_path, mu_file_name, inv_file_name, node_list):

    get_all_invs(dir_path, inv_file_name)

    for n in node_list:
        for i in range(1, len(invs_list)):
            
            write_inv(dir_path, mu_file_name + '_node' + str(n), i)

            result_file_handle = open(dir_path + 'result/' + mu_file_name + '_' + 'node' + str(n) + '_' + 'inv' + str(i) + '.txt', "w")

            # run command
            try:
                # sp.Popen(['bash', 'run.sh', mu_file_name + '_node' + str(n), mu_compile, mu_include], cwd=dir_path, stdout=result_file_handle)
                sp.run(['bash', 'run.sh', mu_file_name + '_node' + str(n), mu_compile, mu_include], cwd=dir_path, stdout=result_file_handle, timeout=3600) # cutoff time
            except:
                result_file_handle.write("Timeout.\n")
            
            result_file_handle.close()


def collect_result(dir_path, mu_file_name, node_list):
    csv_file = open("./result.csv", 'w', newline='')
    writer = csv.writer(csv_file)
    writer.writerow(['protocol', 'inv', 'result', 'run_time', 'states'])
    csv_file.close()

    csv_file = open("./result.csv", 'a', newline='')
    writer = csv.writer(csv_file)

    for n in node_list:
        for i in range(1, len(invs_list)):

            result_file_handle = open(dir_path + 'result/' + mu_file_name + '_' + 'node' + str(n) + '_' + 'inv' + str(i) + '.txt', "r")
            result_txt = result_file_handle.read()
            
            # cut off time
            time_txt = re.findall('State Space Explored:\n\n.*\n\nAnalysis of State Space:', result_txt)[0]
            states_a = time_txt.split('states')[0]
            states = re.findall('\d+', states_a)[0]
            run_time_a = time_txt.split('rules fired in ')[1]
            run_time = re.findall('\d+.\d+s', run_time_a)[0]

            if re.findall('Invariant\s+".*?"\s+failed.', result_txt) == []:
                writer.writerow([mu_file_name + '_' + 'node' + str(n), 'inv_' + str(i), 'TRUE', str(run_time), str(states)])
            else:
                writer.writerow([mu_file_name + '_' + 'node' + str(n), 'inv_' + str(i), 'FALSE', str(run_time), str(states)])
    
    csv_file.close()


import os
import psutil

# run lab testcases
def run_all_testcases(test_path=''):
    murphi_filename_list = ['mutual', 'german', 'german2004', 'adash', 'eadash', 'ldash', 'n_godsont', 'flash']
    node_num_list = [2, 4, 8]
    for murphi_filename in murphi_filename_list:
        for node_num in node_num_list:
            pid = os.getpid()
            start_memory = psutil.Process(pid).memory_full_info().uss / 1024 / 1024
            sp.run(['bash', 'run.sh', murphi_filename + '_node' + str(node_num), mu_compile, mu_include], cwd='./', timeout=3600)
            print(murphi_filename + '_node' + str(node_num) + " case run successfully!")
            end_memory = psutil.Process(pid).memory_full_info().uss / 1024 / 1024
            print(murphi_filename + '_node' + str(node_num) + " occupies memory: " + str(end_memory - start_memory) + "MB")



if __name__ == '__main__':

    # check_murphi_file('./', 'flash_ctc10_orig', 'invs-k1.m', [2])
    # collect_result('./', 'flash_ctc10_orig', [2])


    # testcase_name = 'n_godsont_node16'
    # sp.run(['bash', 'run.sh', testcase_name, mu_compile, mu_include], cwd='./', timeout=3600)


    # sp.run(['bash', 'run.sh', 'adash_node2', mu_compile_old, mu_include_old], cwd='./', timeout=3600)
    sp.run(['bash', 'run.sh', 'adash_node2', mu_compile, mu_include], cwd='./', timeout=3600)


    # run_all_testcases()
