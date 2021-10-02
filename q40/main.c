#include <stdio.h>

void fun(char *a);

int main() {

    char a[] = "*******A*BC*DEF*G****";
    fun(a);
    return 0;
}

void fun(char *a){

    int k = 0;
    while (a[k++] == '*');

    int i = 0;
    for (i = 0; a[i] != '\0'; ++i) {
        a[i] = a[i+k - 1];
    }

    a[i] = '\0';
    printf("%s",a);
}