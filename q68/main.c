#include <stdio.h>


void fun(int a,int b,long *c);

int main() {

    long c;
    fun(45,12,&c);
    printf("%ld",c);
    return 0;
}

void fun(int a,int b,long *c){
    int as = a/10;
    int ag = a%10;
    int bs = b/10;
    int bg = b%10;

    *c = as*100 + ag + bs*1000 + bg * 10;
}
