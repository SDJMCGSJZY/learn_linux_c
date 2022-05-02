#include <stdio.h> 
#include <stdlib.h> 
#include <pthread.h> 
#include <unistd.h> 
#include <string.h> 

static pthread_mutex_t mutex; //定义互斥锁 

static pthread_cond_t cond; //定义条件变量 

static int g_avail = 0; //全局共享资源 

static unsigned int t1 = 1;
static unsigned int t2 = 2;
static unsigned int t3 = 3;


/* 消费者线程 */ 
static void *consumer_thread(void *arg) 
{ 
    int loops = *((int *)arg);
    for ( ; ; ) 
    { 
        pthread_mutex_lock(&mutex);
        //上锁 
        while (0 >= g_avail) 
            pthread_cond_wait(&cond, &mutex);//等待条件满足 
        while (0 < g_avail) 
        {
            unsigned int i = 3;
            g_avail--; //消费
            while(i--)
            {
                printf("loops = %d 消费中 i = %d\n",loops,i);
                //sleep(1);
            }
        } 
        pthread_mutex_unlock(&mutex);//解锁 
    } 
    return (void *)0; 
} 

/* 主线程（生产者） */ 
int main(int argc, char *argv[]) 
{ 
    pthread_t tid,tid2,tid3; 
    int ret; 

    /* 初始化互斥锁和条件变量 */ 
    pthread_mutex_init(&mutex, NULL); 
    pthread_cond_init(&cond, NULL); 
    /* 创建新线程 */ 
    ret = pthread_create(&tid, NULL, consumer_thread, &t1);
    if (ret) 
    { 
        fprintf(stderr, "pthread_create error: %s\n", strerror(ret)); 
        exit(-1); 
    } 

    ret = pthread_create(&tid2, NULL, consumer_thread, &t2);
    if (ret) 
    { 
        fprintf(stderr, "pthread_create error: %s\n", strerror(ret)); 
        exit(-1); 
    }

    ret = pthread_create(&tid3, NULL, consumer_thread, &t3);
    if (ret) 
    { 
        fprintf(stderr, "pthread_create error: %s\n", strerror(ret)); 
        exit(-1); 
    }
    
    for ( ; ; ) 
    { 
        pthread_mutex_lock(&mutex);//上锁 
        g_avail++; //生产
        unsigned int i = 3;
        while(i--) 
        {
            printf("生成中 i = %d\n",i);
        }
        pthread_mutex_unlock(&mutex);//解锁 
        pthread_cond_signal(&cond);//向条件变量发送信号 
    } 
    exit(0); 
}