#! python3

import subprocess as sp
from multiprocessing.dummy import Pool as ThreadPool
import csv
import re

mu_compile = '../src/mu'
mu_include = '../include'

mu_compile_old = '../../cmurphi5.5.0/src/mu'
mu_include_old = '../../cmurphi5.5.0/include'


mu_compile_v1 = '../../cmurphi5.5.0-v1.1/src/mu'
mu_include_v1 = '../../cmurphi5.5.0-v1.1/include'


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


# hold the checking process for a murphi file
def check_murphi_file(dir_path, mu_file_name, inv_file_name, node_list=[]):

    get_all_invs(dir_path, inv_file_name)

    # for n in node_list:
    for i in range(1, len(invs_list)):
        
        write_inv(dir_path, mu_file_name, i)

        # result_file_handle = open(dir_path + 'result/' + mu_file_name + '_' + 'inv' + str(i) + '.txt', "w")

        # run command
        try:
            # sp.Popen(['bash', 'run.sh', mu_file_name + '_node' + str(n), mu_compile, mu_include], cwd=dir_path, stdout=result_file_handle)
            # sp.run(['bash', 'run.sh', mu_file_name, mu_compile, mu_include], cwd=dir_path, stdout=result_file_handle, timeout=3600) # cutoff time
            sp.run(['bash', 'run.sh', dir_path + mu_file_name, mu_compile_old, mu_include_old, mu_file_name + '_' + 'inv' + str(i)], cwd='./', timeout=3600)
        except:
        #     result_file_handle.write("Timeout.\n")
            print("Timeout.\n")
        
        # result_file_handle.close()

states_list = []
# hold the checking process for a murphi file
def check_some_states():

    file = open('./TL_states/states_NI_M_2.m', "r")
    states = file.read()   # transfer text to string 

    global states_list
    states_list = states.split('This states \n')
    for i in range(len(states_list)):
        states_list[i] = str(states_list[i].replace('This states \n', ''))  # update for list
    file.close()

    # for i in range(1, 27): 
    for i in range(27, len(states_list)):
    # s_list = [27, 28]
    # for i in s_list:
        
        # read_file = open('./TL_states/TL-C_v4.3.cpp', "r")
        read_file = open('test.cpp', "r")
        cpp_content = read_file.read()   # transfer text to string
        if re.findall("// set states.*// set states", cpp_content, re.S) != []:
            states_last = re.findall("// set states.*// set states", cpp_content, re.S)[0]
            cpp_content = cpp_content.replace(states_last, '// set states\n' + states_list[i] + '// set states')
        states_last = re.findall("// set invariants.*// set invariants", cpp_content, re.S)[0]
        inv_str = 'const rulerec invariants[] = {\n{"test_reachable_state_%s", &mu__condition_%s, NULL, },\n};' % (i, 1364 - i * 9)
        cpp_content = cpp_content.replace(states_last, '// set invariants\n' + inv_str + '// set invariants')
        read_file.close()
        mu_file_handle = open('test.cpp', "w")
        mu_file_handle.write(cpp_content)
        mu_file_handle.close()

        # run command
        try:
            sp.run(['bash', 'run.sh', 'state_' + str(i)], cwd='./', timeout=600)
        except:
            print("Timeout.\n")


def states_collect_result():
    result_path = './TL_states/result0315/LS/'
    csv_file = open(result_path + "result.csv", 'w', newline='')
    writer = csv.writer(csv_file)
    writer.writerow(['state_no', 'LS'])
    csv_file.close()

    csv_file = open(result_path + "result.csv", 'a', newline='')
    writer = csv.writer(csv_file)

    # for n in node_list:
    # for i in range(len(states_list)):
    for i in range(27, 64):

        result_file_handle = open(result_path + 'state_' + str(i) + '.log', "r")
        result_txt = result_file_handle.read()

        if re.findall('Invariant\s+".*?"\s+failed.', result_txt) != []:
            time_txt = re.findall('State Space Explored:\n\n.*\n\nAnalysis of State Space:', result_txt)[0]
            states_a = time_txt.split('states')[0]
            states = re.findall('\d+', states_a)[0]

            writer.writerow(['state_' + str(i), str(states)])
        elif re.findall('Too many active states.', result_txt) != []:
            writer.writerow(['state_' + str(i), 'failed'])
        else:
            writer.writerow(['state_' + str(i), 'unknown'])

        # if re.findall('Target state found', result_txt) != []:
        #     writer.writerow(['state_' + str(i), 'Reachable', '0.5h'])
        # else:
        #     writer.writerow(['state_' + str(i), 'Unknown', '0.5h'])
    
    csv_file.close()


def collect_result(dir_path, mu_file_name, node_list=[]):
    csv_file = open(dir_path + "result.csv", 'w', newline='')
    writer = csv.writer(csv_file)
    writer.writerow(['protocol', 'inv_name', 'result', 'states', 'LS_result', 'LS_states'])
    csv_file.close()

    csv_file = open(dir_path + "result.csv", 'a', newline='')
    writer = csv.writer(csv_file)

    # for n in node_list:
    for i in range(1, len(invs_list)):

        result_file_handle = open(dir_path + 'result/' + mu_file_name + '_' + 'inv' + str(i) + '.txt', "r")
        result_txt = result_file_handle.read()
        
        # cut off time
        time_txt = re.findall('State Space Explored:\n\n.*\n\nAnalysis of State Space:', result_txt)[0]
        states_a = time_txt.split('states')[0]
        states = re.findall('\d+', states_a)[0]
        run_time_a = time_txt.split('rules fired in ')[1]
        run_time = re.findall('\d+.\d+s', run_time_a)[0]

        if re.findall('Invariant\s+".*?"\s+failed.', result_txt) != []:
            # run local search
            write_inv(dir_path, mu_file_name, i)
            sp.run(['bash', 'run_LS.sh', dir_path + mu_file_name, mu_compile, mu_include, mu_file_name + '_' + 'inv' + str(i)], cwd='./', timeout=3600)
            result_file_handle_ls = open(dir_path + 'LS_result/' + mu_file_name + '_' + 'inv' + str(i) + '.txt', "r")
            result_txt_ls = result_file_handle_ls.read()
            
            # cut off time
            time_txt_ls = re.findall('State Space Explored:\n\n.*\n\nAnalysis of State Space:', result_txt_ls)[0]
            states_a_ls = time_txt_ls.split('states')[0]
            states_ls = re.findall('\d+', states_a_ls)[0]
            if re.findall('Invariant\s+".*?"\s+failed.', result_txt_ls) != []:
                writer.writerow([mu_file_name, 'inv_' + str(i), 'False', str(states), 'False',str(states_ls)])
            else:
                writer.writerow([mu_file_name, 'inv_' + str(i), 'False', str(states), 'True',str(states_ls)])
        else:
            writer.writerow([mu_file_name, 'inv_' + str(i), 'True', str(states)])
    
    csv_file.close()


import os
import psutil

# run search algorithm
def runLocalSearch(dir_path, mu_file_name, file_handle):
    try:
        sp.run(['run.sh', mu_file_name, mu_compile, mu_include], cwd=dir_path, stdout=file_handle, timeout=3600) # cutoff time
    except:
        file_handle.write("Timeout.\n")

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

    check_some_states()
    # states_collect_result()

    # check_murphi_file('./invs/', 'flash_data', 'inv_NI_Remote_Get_Put')
    # collect_result('./invs/', 'flash_data')

    # sp.run(['bash', 'run.sh', './invs/' + 'flash_data', mu_compile_old, mu_include_old, 'flash_data' + '_' + 'inv10'], cwd='./', timeout=3600)
    # sp.run(['bash', 'run_LS.sh', './invs/' + 'flash_data', mu_compile, mu_include, 'flash_data' + '_' + 'inv8'], cwd='./', timeout=3600)

    # testcase_name = 'n_godsont_node16'
    # sp.run(['bash', 'run.sh', testcase_name, mu_compile, mu_include], cwd='./', timeout=3600)


    # sp.run(['bash', 'run.sh', 'test', mu_compile_old, mu_include_old], cwd='./', timeout=3600)
    # sp.run(['bash', 'run.sh', './invs/flash_data', mu_compile_v1, mu_include_v1], cwd='./', timeout=3600)
    # sp.run(['bash', 'run.sh', './invs/flash_data', mu_compile, mu_include], cwd='./', timeout=3600)


    # run_all_testcases()
