#include <stdio.h>


void fun(int a,int b,long *c);

int main() {
    int a = 45,b = 12;

    long c;
    fun(a,b,&c);
    printf("%ld ",c);
    return 0;
}

void fun(int a,int b,long *c){
    int ag = a % 10;
    int as = a / 10;

    int bg = b % 10;
    int bs = b / 10;

    *c = as * 100 + ag + bg * 1000 + bs*10;
}