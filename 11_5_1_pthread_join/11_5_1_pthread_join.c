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
    while(i--){
        sleep(1); 
        printf("新线程 running\n"); 
    }
    printf("新线程end\n"); 
    pthread_exit((void *)10); 
} 

int main(void) 
{ 
    pthread_t tid; 
    void *tret; 
    int ret; 
    ret = pthread_create(&tid, NULL, new_thread_start, NULL); 
    if (ret) 
    { 
        fprintf(stderr, "pthread_create error: %s\n", strerror(ret));
        exit(-1);
    } 
    ret = pthread_join(tid, &tret); 
    if (ret) 
    { 
        fprintf(stderr, "pthread_join error: %s\n", strerror(ret)); 
        exit(-1); 
    } 
    printf("新线程终止, code=%ld\n", (long)tret); 
    exit(0); 
}