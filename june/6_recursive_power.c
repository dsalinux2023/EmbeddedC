#include <stdio.h>
#include <stdlib.h>

int foo(int x,int n){
    int val;
    val =1 ;
    if(n>0){
        if(n%2 == 1) val= val*x;
        val=val*foo(x*x,n/2);
    }
    return val;
}

int main(){

    printf("4 power 5 is =%d\n",foo(4,5));
    return 0;
}

//output = x ^ n