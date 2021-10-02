#include <stdio.h>


void fun(char *a);

int main() {

    char a[] = "****A*BC*DEF*G*******";
    fun(a);
    return 0;
}

/*
 * ****ABCDEFG
 */
void fun(char *a){
    int k = 0;
    while (a[k++] == '*');

    for (int i = k; a[i] != '\0'; ++i) {
        if(a[i]!='*'){
            a[k++] = a[i];
        }
    }
    a[k] = '\0';
    printf("%s",a);
}