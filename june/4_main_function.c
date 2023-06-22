#include<stdio.h>
#include<stdlib.h>

int main(int argc,char* argv[]){
    if(argc == 1) printf("error");

    printf("%c ",*(argv[1]+1));
    printf("%c ",(*(argv+1))[2]);
    printf("%c ",argv[1][2]);

    return 0;
}

//output: 5 7 7