#include <stdio.h>
#include "string.h"

#define N 100

void fun(char *str);

int main() {

    char str[] = "abcdefg";
    fun(str);
    return 0;
}

void fun(char *str){

    char b[N];
    int len = strlen(str);
    for (int i = 0; i < len; ++i) {
        b[i] = str[len - i-1];
    }

    printf("%s",b);
}