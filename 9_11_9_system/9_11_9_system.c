/*
    执行本函数命令
*/
#include <stdio.h> 
#include <stdlib.h> 

int main(int argc, char *argv[]) 
{ 
    int ret; 
    if (2 > argc) 
        exit(-1); 
    
    ret = system(argv[1]); 
    if (-1 == ret) 
        fputs("system error.\n", stderr); 
    else 
    { 
        if (WIFEXITED(ret) && (127 == WEXITSTATUS(ret))) 
            fputs("could not invoke shell.\n", stderr); 
    } 
    
    exit(0);

}