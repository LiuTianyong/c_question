#include <stdio.h>

void fun(char *str,char *p);

int main() {

    char str[] = "****A*BC*DEF*G*******";
    fun(str,&str[20]);
    return 0;
}

void fun(char *str,char *p){

    int num = 0;
    while (*p-- == '*') num++;

    char b[100];
    int k = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if(str[i] != '*'){
            b[k++] = str[i];
        }
    }
    k--;
    for (int i = 0; i < num; ++i) {
        b[k++] = '*';
    }
    b[k] = '\0';
    printf("%s",b);
}