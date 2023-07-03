#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void foo(int a,int b, ...);

int main(){
    foo(1,5);
    foo(2,5,6);
    return 0;
}

void foo(int a,int b, ...){
    int j;
    int* ptr=&b;
    j=0;

    // printf("%p %p %p\n",&a,&b,&(b)+1);
    // printf("%d %d %d\n",*(&a),*(&b),*(&(b)+1));
    while(j<a){
        printf("%d ",*ptr);
        j++;
        ptr++;
    }
    printf("\n");
}

//For some reason it is not giving the expected value (maybe the question is wrong)