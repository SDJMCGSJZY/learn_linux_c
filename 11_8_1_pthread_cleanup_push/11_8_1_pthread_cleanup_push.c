#include <stdio.h> 
#include <stdlib.h> 
#include <pthread.h> 
#include <string.h> 
#include <unistd.h> 
#include <sys/types.h> 
#include <unistd.h> 

void cleanup(void *arg)
{
    printf("cleanp: %s\n", (char *)arg);
}

void * thr_fn1(void *arg)
{
    printf("thread 1 start\n");
    pthread_cleanup_push(cleanup, "thread 1 first handler");
    pthread_cleanup_push(cleanup, "thread 1 second handler");
    printf("thread 1 push complete\n");
    if(arg)
    {
        return ((void*)1);
        //pthread_exit ((void*)1);
    }
    pthread_cleanup_pop(0);
    pthread_cleanup_pop(0);
    return ((void *)1);
}

void *thr_fn2(void *arg)
{
    printf("thread 2 start\n");
    pthread_cleanup_push(cleanup, "thread 2 first handler");
    pthread_cleanup_push(cleanup, "thread 2 second handler");
    printf("thread 2 push complete\n");
    if(arg)
    {
        pthread_exit ((void*)2);
    }
    pthread_cleanup_pop(0);
    pthread_cleanup_pop(0);
    return ((void *)2);
}

int main(void)
{
    int err;
    pthread_t tid1, tid2;
    int tret;
    err = pthread_create(&tid1, NULL, thr_fn1, (void *)1);
    if(err != 0)
    {
        printf("can't create thread 1: %s\n", strerror(err));
    }
    err = pthread_create(&tid2, NULL, thr_fn2, (void *)1);
    if(err != 0)
    {
        printf("can't create thread 2 :%s\n", strerror(err));
    }
    err = pthread_join(tid1, (void *)&tret);
    if(err != 0)
    {
        printf("can't join with thread 1: %s\n", strerror(err));
    }
    printf("thread 1 exit code %d\n", (int)tret);
    err = pthread_join(tid2, (void *)&tret);
    if(err != 0)
    {
        printf("can't join with thread 2: %s\n", strerror(err));
    }
    printf("thread 2 exit code %d\n", (int)tret);
    exit(0);
}

#if 0
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
    sleep(2);
    pthread_exit((void *)0); 
    //线程终止 
    /* 为了与pthread_cleanup_push配对,不添加程序编译会通不过 */ 
    pthread_cleanup_pop(0); 
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
#endif