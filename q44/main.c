#include <stdio.h>

void fun(char *str);

int main() {

    char str[] = "ABCDEFGHIJK";
    fun(str);
    return 0;
}

void fun(char *str){

    int k = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if(i % 2 != 0){
            str[k++] = str[i];
        }
    }
    str[k] = '\0';
    printf("%s",str);
}