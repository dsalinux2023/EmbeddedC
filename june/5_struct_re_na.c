#include<stdio.h>
#include<stdlib.h>

int main(){
    unsigned char c;
    typedef struct name {
        long a;
        int b;
        long c;
    }r;

    r re = {3,4,5};
    r *na= &re;

    printf("%d ",*(int *)((char*)na+ (unsigned int)&(((struct name *)0)->b)));

    return 0;
}

//output: 4