#include <stdio.h>
#include <stdlib.h>

int main(){
    struct {
        char* a;
        int i;
    } st = {"done" , 10};

    printf("%s ",(&st)->a);
    printf("%d ",(&st)->i);  
    return 0;
}

//op:- done 10