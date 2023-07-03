#include <stdio.h>
#include <stdlib.h>

int main(){
    double a[2][3];
    printf("%ld %ld %ld",sizeof(a),sizeof(a[1]),sizeof(a[1][1]));
    return 0;
}

//o/p: 48 24 8