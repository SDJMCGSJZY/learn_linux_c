#include <stdio.h> 
#include <stdlib.h> 
#include <pthread.h> 
#include <string.h> 
#include <unistd.h> 
#include <sys/types.h> 
#include <unistd.h> 

static void *new_thread_start(void *arg) 
{ 
    unsigned int i = 10;
    printf("新线程start\n"); 
    sleep(1); 

    while(i--){
        sleep(1); 
        printf("新线程 running\n"); 
    }

    printf("新线程end\n"); 
    pthread_exit(NULL); 
}

int main(void) 
{ 
    pthread_t tid;
    int ret; 
    ret = pthread_create(&tid, NULL, new_thread_start, NULL); 
    if (ret) 
    { 
        fprintf(stderr, "Error: %s\n", strerror(ret)); 
        exit(-1); 
    } 
    sleep(3); 
    printf("主线程end\n"); 
    pthread_exit(NULL); 
    exit(0); 
}