#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    // make two process which run same
    // program after this instruction //
    printf("PID 0 is:%d > ",getpid());
    int i,j = 0;
    i = fork();
    printf("PID 1 is:%d > ",getpid());
    j = fork();
    printf("My PID 2 is:%d > ",getpid());

    printf("Fork Example PID i: <%d> j: <%d> !\n",i,j);
    return 0;
}
