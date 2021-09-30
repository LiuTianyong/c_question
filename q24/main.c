#include <stdio.h>

#define N 100



void fun(char *str);
int main() {

    char str[N] = "*******A*BC*DEF*G****";

    fun(str);
    return 0;
}


void fun(char *str){

    int k = 0;
    int flag = 1;
    int n;
    char s[N];

    for (int i = 0; str[i] != '\0'; ++i) {
        if(flag && str[i] == '*'){
            n++;
        } else{
            flag = 0;
            s[k++] = str[i];
        }
    }

    for (int i = k; i < k+n; ++i) {
        s[i] = '*';
    }

    printf("%s",s);

}