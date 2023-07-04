#include <stdio.h>
#include <stdlib.h>

int main(){
    union{
        struct 
        {
            char c[2];
            char ch[2];
        }s;

        struct 
        {
          int i;
          int j;
        }st;
    } u = {{"ab","cd"},{1,2}}; //this need to check
    printf("%d %d",u.st.i,u.st.j);
    return 0;
}