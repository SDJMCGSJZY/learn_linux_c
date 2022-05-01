#include <stdio.h> 
#include <stdlib.h> 
#include <pthread.h> 
#include <string.h> 
#include <unistd.h> 
#include <sys/types.h> 
#include <unistd.h> 

static void cleanup(void *arg) 
{ 
    printf("cleanup: %s\n", (char *)arg); 
} 

static void *new_thread_start(void *arg) 
{ 
    printf("新线程--start run\n"); 
    pthread_cleanup_push(cleanup, "第1次调用"); 
    pthread_cleanup_push(cleanup, "第2次调用"); 
    pthread_cleanup_push(cleanup, "第3次调用"); 
    pthread_cleanup_pop(1); 
    //执行最顶层的清理函数 
    printf("~~~~~~~~~~~~~~~~~\n"); 
    sleep(2); 
    pthread_exit((void *)0); 
    //线程终止 
    /* 为了与pthread_cleanup_push配对 */ 
    pthread_cleanup_pop(0); 
    pthread_cleanup_pop(0);

} 

int main(void) 
{ 
    pthread_t tid; 
    void *tret; 
    int ret; 
    /* 创建新线程 */ 
    ret = pthread_create(&tid, NULL, new_thread_start, NULL); 
    if (ret) 
    { 
        fprintf(stderr, "pthread_create error: %s\n", strerror(ret)); 
        exit(-1); 
    } 
    /* 等待新线程终止 */ 
    ret = pthread_join(tid, &tret); 
    if (ret) 
    { 
        fprintf(stderr, "pthread_join error: %s\n", strerror(ret)); 
        exit(-1); 
    } 
    printf("新线程终止, code=%ld\n", (long)tret); 
    exit(0); 
}