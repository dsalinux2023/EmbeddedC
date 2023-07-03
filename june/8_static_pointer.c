#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char i;
void try1();
void try2(char*);

int main(){
    try1();
    return 0;
}

void try1(){
    static char* ptr="abcde";
    i=*ptr;
    printf("%c",i);
    try2(++ptr);
}

void try2(char* t){
    static char* pt;
    pt=t+strlen(t)-1;
    if(i!=*pt--)
    if(t!=pt)
    try1();
}

//o/p:-abc