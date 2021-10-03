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
    for (int i = 0; str[i]!='\0'; ++i) {
        if(str[i] >= '0' && str[i] <= '9'){
            t[k++] = str[i];
            continue;
        }
        if(str[i] % 2 == 0){
            t[k++] = str[i];
        }
    }

    t[k] = '\0';

}