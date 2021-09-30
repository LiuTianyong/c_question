#include <stdio.h>
#include "string.h"

void fun(char *str,int num);

int main() {

    char str[10] = "DBGEACF";
    char str2[10] = "CEAedca";

    int len = strlen(str);
    fun(str,len);

    printf("\n");
    len = strlen(str2);
    fun(str2,len);

    return 0;
}

void fun(char *str,int num) {
    char temp;
    int len = strlen(str);
    for (int i = 1; i < len - 2; ++i) {
        for (int j = 1; j < len - i - 1; ++j) {
            if (str[j] < str[j + 1]) {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < strlen(str); ++i) {
        printf("%c ", str[i]);
    }
}

