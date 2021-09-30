#include <stdio.h>

#define N 50

void fun(char *str,int n);

int main() {
    char str[N] = "*******A*BC*DEF*G****";
    fun(str,4);

    return 0;
}
void fun(char *str,int n){

    int i = 0,j,k=0;
    while (str[k]=='*')k++;

    if(k > n){
        i = n;
        j = k;
        for (; str[j] != '\0' ; j++) {
            str[i++] = str[j];
            str[i] = 0;
        }
    }

    printf("%s",str);
}