#include <signal.h> 
#include <stdio.h> 
#include <stdlib.h> 

int main(void) 
{ 
    printf("SIGINT描述信息: %s\n", sys_siglist[SIGINT]); 
    printf("SIGQUIT描述信息: %s\n", sys_siglist[SIGQUIT]); 
    printf("SIGBUS描述信息: %s\n", sys_siglist[SIGBUS]); 
    exit(0); 
}