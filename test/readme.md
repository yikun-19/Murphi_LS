
invs.m 为待测试的不变式集合组成的文本

main.py将invs.m中的不变式分割出来，每次选择一个不变式并写入protocol.m的底部, 并调用murphi检测.

运行: 在main.py中设置好路径和待测试协议文件名, 运行 python3 main.py即可, 结果写入 result.txt.

其中 result.txt 可以进一步完善, 如接收murphi的信号, 自行控制写入语句.
