#include <stdio.h>

void fun(int a, int b);

int main() {

    int a = 45, b = 12;
    fun(a, b);

    return 0;
}

void fun(int a, int b) {

    int ag = a % 10;
    int as = a / 10;

    int bg = b % 10;
    int bs = b / 10;

    int c = as * 10 + ag * 1000 + bs * 100 +bg;
    printf("%d ",c);
}