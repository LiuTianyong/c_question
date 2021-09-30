#include <stdio.h>


#define M 50
#define N 50

char * fun(char *a,char *b);

int main() {

    char a[M] = {"1284"};
    char b[N] = {"bbhnn"};

    char * res = fun(a,b);
    printf("%s", res);
    return 0;
}

char * fun(char *a,char *b){
    int i = 0;
    while (a[i] != '\0'){
        i++;
    }
    while (*b != '\0'){
        a[i] = *b++;
        i++;
    }

    a[i] = '\0';

    return a;
}