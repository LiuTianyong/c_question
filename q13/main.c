#include <stdio.h>
#include "stdlib.h"

void fun(char *str,char t[]);

int k = 0;
int main() {

    char str[] = "ABCDEFG12345";
    char t[10];
    fun(str,t);
    for (int i = 0; i < k; ++i) {
        printf("%c ",t[i]);
    }
    return 0;
}

void fun(char *str,char *t){
//    int k = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if(str[i] % 2 == 0){
           t[k] = str[i];
           k++;
        }
    }
}