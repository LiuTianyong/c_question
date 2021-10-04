#include <stdio.h>


void fun(char *str,char *h,char *p);

int main() {

    char str[] = "****A*BC*DEF*G********";
    fun(str,&str[0],&str[21]);
    return 0;
}

void fun(char *str,char *h,char *p){

    int k = 0;
    char b[100];

    int hn = 0;
    while (*h++ == '*') hn++;

    int pn = 0;
    while (*p-- == '*') pn++;

    for (int i = 0; i < hn; ++i) {
        b[k++] = '*';
    }
    for (int i = 0; str[i] != '\0'; ++i) {
        if(str[i] != '*'){
            b[k++] = str[i];
        }
    }

    for (int i = 0; i < pn; ++i) {
        b[k++] = '*';
    }
    b[k] = '\0';
    printf("%s",b);
}
