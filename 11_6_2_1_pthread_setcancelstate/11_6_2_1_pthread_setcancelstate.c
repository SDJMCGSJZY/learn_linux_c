#include <stdio.h> 
#include <stdlib.h> 
#include <pthread.h> 
#include <string.h> 
#include <unistd.h> 
#include <sys/types.h> 
#include <unistd.h> 

static void *new_thread_start(void *arg)
{ 
    unsigned int i = 20;
    /* 设置为不可被取消 */ 
    pthread_setcancelstate(PTHREAD_CANCEL_DISABLE, NULL); 
    while(i--)
    { 
        printf("打印到0之后就是表示自愿终止  新线程--running i = %d\n",i); 
        if(10==i)
            pthread_setcancelstate(PTHREAD_CANCEL_ENABLE, NULL); 
        sleep(2); 
    } 
    return (void *)2222; 
} 

int main(void) 
{ 
    pthread_t tid; 
    void *tret; 
    int ret; 
    unsigned int i = 20;
    /* 创建新线程 */ 
    ret = pthread_create(&tid, NULL, new_thread_start, NULL); 
    if (ret) 
    { 
        fprintf(stderr, "pthread_create error: %s\n", strerror(ret)); 
        exit(-1); 
    } 
    sleep(1); 
    /* 向新线程发送取消请求 */ 
    ret = pthread_cancel(tid); 
    if (ret) 
    { 
        fprintf(stderr, "pthread_cancel error: %s\n", strerror(ret)); 
        exit(-1); 
    } 
    printf("主线程 i = %d ,ret = %d\n",i ,ret);
    
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