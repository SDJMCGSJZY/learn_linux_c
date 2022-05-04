#include <stdio.h> 
#include <stdlib.h> 
#include <sys/types.h> 
#include <sys/stat.h> 
#include <fcntl.h> 
#include <unistd.h> 
#include <string.h> 

/*
通常情况下是mouseX（X表示序号0、1、2），但也不一定，也有可能是eventX，如何确定到底是哪个设备文件，可以通过对设备文件进行读取来判断，譬如使用od命令： sudo od -x /dev/input/event3

在本电脑上使用的是event2
*/

int main(void) 
{ 
    char buf[100]; 
    int fd, ret; 
    /* 打开文件 */ 
    fd = open("/dev/input/event2", O_RDONLY|O_NONBLOCK); //指定为非阻塞防止
    if (-1 == fd) 
    { 
        perror("open error"); 
        exit(-1);
    } 
    /* 读文件 */ 
    memset(buf, 0, sizeof(buf)); 
    ret = read(fd, buf, sizeof(buf)); 
    if (0 > ret) 
    { 
        perror("read error"); 
        close(fd); 
        exit(-1);
    } 
    printf("成功读取<%d>个字节数据\n", ret); 
    /* 关闭文件 */ 
    close(fd); 
    exit(0); 
}