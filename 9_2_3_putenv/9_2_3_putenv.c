#if 0
#include <stdio.h> 
#include <stdlib.h> 
int main(int argc, char *argv[]) 
{ 
    if (2 > argc) 
    { 
        fprintf(stderr, "Error: 传入name=value\n"); 
        exit(-1); 
    } 
        
    /* 添加/修改环境变量 */ 
    if (putenv(argv[1])) 
    { 
        perror("putenv error"); 
        exit(-1); 
    }else
    {
        printf("OK argv[1] = %s\n",argv[1]);
    }


    exit(0); 
}
#endif

#include <stdlib.h>
main()
{
  char *p;
  if((p = getenv("USER")))
  printf("USER =%s\n", p);
  putenv("USER=test");
  printf("USER=%s\n", getenv("USER"));
}