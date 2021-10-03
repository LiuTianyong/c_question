#include <stdio.h>


void fun(char *str,char t[]);

int main() {

    char str[] = "ABCDEFG12345";
    char t[100];
    fun(str,t);
    printf("%s",t);
    return 0;
}

void fun(char *str,char t[]){
    int k = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if(i % 2 == 1&& str[i] % 2 == 1){
            t[k++] = str[i];
        }
    }

    t[k] = '\0';
}