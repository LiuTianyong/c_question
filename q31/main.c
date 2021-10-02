#include <stdio.h>



void fun(char *a,int n,int h,int e);

int main() {

    char a[] = "****A*BC*DEF*G*******";
    fun(a,21,4,7);

    return 0;
}

void fun(char *a,int n,int h,int e){

    int i = 0;
    for (i = 0; i < n - e - h; ++i) {
        a[i] = a[i + h];
    }
    a[i] = '\0';

    printf("%s ",a);
}