#include<stdio.h>
#include<stdlib.h>
#include <setjmp.h>
static jmp_buf buf;
int main()
{
    volatile int b;
    b=3;
    if(setjmp(buf) != 0){
        printf("%d ", b);
        exit(0);
    }
    b=5;
    longjmp(buf,1);
    return 0;
}


//output=5