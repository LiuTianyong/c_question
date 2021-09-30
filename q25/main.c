#include <stdio.h>

#define N 50

void fun(char a[],char b[],int n);

int main() {

    char a[N] = "world",b[N];
    fun(a,b,3);

    return 0;
}

void fun(char a[],char b[],int n){

    int k = 0;
    for (int i = 0; a[i] != '\0'; ++i) {
        if(i != n){
            b[k++] = a[i];
        }
    }
    n = k;

    for (int i = 0; i < n; ++i) {
        printf("%c ",b[i]);
    }
}
