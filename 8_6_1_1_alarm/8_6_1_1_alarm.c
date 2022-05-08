#include <stdio.h> 
#include <stdlib.h> 
#include <signal.h> 
#include <unistd.h> 

static int times = 3;

static void sig_handler(int sig) 
{ 
    printf("Alarm timeout ,times %d\n",times); 
    if(0>(times--))
        exit(0); 
    alarm(5);
} 

int main(int argc, char *argv[]) 
{ 
    struct sigaction sig = {0}; 
    int second; 
    /* 检验传参个数 */ 
    if (2 > argc) 
        exit(-1); 
    
    /* 为SIGALRM信号绑定处理函数 */ 
    sig.sa_handler = sig_handler; 
    sig.sa_flags = 0; 
    if (-1 == sigaction(SIGALRM, &sig, NULL)) 
    {
        perror("sigaction error"); 
        exit(-1); 
    } 
    /* 启动alarm定时器 */ 
    second = atoi(argv[1]); 
    printf("定时时长: %d秒\n", second); 
    alarm(second); 
    /* 循环 */ 
    for ( ; ; ) 
        sleep(1); 
    exit(0); 
}