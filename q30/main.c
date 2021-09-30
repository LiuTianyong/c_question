#include <stdio.h>


#define N 50

void fun(char *str,char t[]);
int main() {

    char str[N] = "ABCDEFG123456";

    char t[N];

    fun(str,t);
    return 0;
}

void fun(char *str,char t[]){

    int k = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if(i % 2==0 && str[i] % 2 == 0){
            t[k++] = str[i];
        }
    }

    printf("%s",t);

}