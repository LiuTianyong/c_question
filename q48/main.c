#include <stdio.h>


int fun(int a,int b);

int main() {

    printf("%d", fun(45,12));
    return 0;
}

int fun(int a,int b){
    int ag = a % 10;
    int as = a / 10;
    int bg = b% 10;
    int bs = b / 10;

    return as * 10 + ag * 1000 + bs + bg * 100;
}