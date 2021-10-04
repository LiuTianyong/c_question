#include <stdio.h>

char * fun(char *a,char *b);

int main() {

    char a[1000] = "";
    char b[1000] = "";

    gets(a);
    gets(b);
    char *res = fun(a,b);
    printf("%s",res);
    return 0;
}

char * fun(char *a,char *b){
    int alen = 0;
    while (a[alen++] != '\0');

    int blen = 0;
    while (b[blen++] != '\0');

    return alen > blen ? a:b;
}