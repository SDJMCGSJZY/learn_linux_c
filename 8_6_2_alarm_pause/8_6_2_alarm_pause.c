#include <stdio.h> 
#include <stdlib.h> 
#include <signal.h> 
#include <unistd.h> 

static void sig_handler(int sig) 
{
    puts("Alarm timeout"); 
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
    /* 进入休眠状态 */ 
    pause(); 
    puts("休眠结束"); 
    exit(0); 
}