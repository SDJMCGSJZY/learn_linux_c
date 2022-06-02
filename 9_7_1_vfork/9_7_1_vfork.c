/*
vfork()与fork()一样都创建了子进程，但vfork()函数并不会将父进程的地址空间完全复制到子进程中，因为子进程会立即调用exec（或_exit），于是也就不会引用该地址空间的数据。不过在子进程调用exec或_exit之前，它在父进程的空间中运行、子进程共享父进程的内存。这种优化工作方式的实现提高的效率；但如果子进程修改了父进程的数据（除了vfork返回值的变量）、进行了函数调用、或者没有调用exec或_exit就返回将可能带来未知的结果。

另一个区别在于，vfork()保证子进程先运行，子进程调用exec之后父进程才可能被调度运行。

虽然vfork()系统调用在效率上要优于fork()，但是vfork()可能会导致一些难以察觉的程序bug，所以尽量避免使用vfork()来创建子进程，虽然fork()在效率上并没有vfork()高，但是现代的Linux系统内核已经采用了写时复制技术来实现fork()，其效率较之于早期的fork()实现要高出许多，除非速度绝对重要的场合，我们的程序当中应舍弃vfork()而使用fork()。
*/
#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <sys/types.h> 

int main(void) 
{ 
    pid_t pid; 
    int num = 100; 
    pid = vfork(); 
    switch (pid) 
    { 
        case -1: 
            perror("vfork error"); 
            exit(-1); 
        case 0:
            /* 子进程 */ 
            printf("子进程打印信息\n"); 
            printf("子进程打印num: %d\n", num); 
            _exit(0); 
        default: 
            /* 父进程 */ 
            printf("父进程打印信息\n"); 
            printf("父进程打印num: %d\n", num); 
            exit(0); 
    } 
}