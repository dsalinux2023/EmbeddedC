#include<stdio.h>
#include<stdlib.h>

void f(char*);

int main(){
    f("123");
    return 0;
}

void f(char a[]){
    if(a[1] == '\0') return;
    f(a+1);
    f(a+1);
    printf("%c ",a[1]);
}

//output:3 3 2