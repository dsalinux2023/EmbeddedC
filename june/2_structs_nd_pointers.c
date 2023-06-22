#include<stdio.h>
#include<stdlib.h>

int main(){
    struct node{
        int a;
        int b;
        int c;
    };

    struct node s={3, 5, 6};
    struct node *pt=&s;
    printf("%d",*(int*)pt);
    return 0;
}