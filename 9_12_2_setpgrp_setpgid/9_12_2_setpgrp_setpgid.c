#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 

int main(void) 
{ 
    printf("更改前进程组ID<%d>\n", getpgrp()); 
    setpgrp(); 
    printf("更改后进程组ID<%d>\n", getpgrp()); 
    exit(0); 
}