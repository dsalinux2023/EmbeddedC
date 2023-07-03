#include <stdio.h>
#include <stdlib.h>

void foo(int [][3]);

int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    foo(a);
    printf("%d",a[2][1]);
}

void foo(int b[][3]){
    ++b;
    b[1][1]=9;
}

//o/p=9