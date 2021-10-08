#include <stdio.h>
#include "stdlib.h"
#include "string.h"

void fun(char *str);

int main() {


    char a[] = "abcda56adcba";
    fun(a);
    return  0;
}


void fun(char *str){

    int flag = 1;
    int len = strlen(str);
    for (int i = 0; i < len / 2; ++i) {
        if(str[i] != str[len - 1 -i]){
            flag = 0;
        }
    }

    if(flag){
        printf("回文");
    } else{
        printf("不是回文");
    }
}