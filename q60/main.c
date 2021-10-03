#include <stdio.h>


void fun(char a[],char b[]);

int main() {

    char a[100] = "dhfofhkjfjhbf";
    char b[50] = "556d58df8f53";
    fun(a,b);
    return 0;
}

void fun(char a[],char b[]){

    int k=-1;
    while (a[++k]);

    for (int i = 0; b[i]!='\0' ; ++i) {
        a[k++] = b[i];
    }

    printf("%s",a);
}