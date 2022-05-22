#include <stdio.h> 
#include <stdlib.h> 
#include <sys/types.h> 
#include <unistd.h> 

int main(void) 
{ 
	pid_t pid = getpid(); 
	printf("本进程的PID为: %d\n", pid); 
	exit(0); 
}