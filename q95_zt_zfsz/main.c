#include <stdio.h>

#define MaxSize 10000

void fun(char *str){

    char zf[MaxSize];
    char sz[MaxSize];

    int k = 0,l = 0;

    for (int i = 0; str[i]!='\0'; ++i) {
        if(str[i] >= '0'&&str[i]<='9'){
            sz[k++] = str[i];
        } else{
            zf[l++] = str[i];
        }
    }

    int m = 0;
    for (int i = 0; i < k; ++i) {
        str[m++] = sz[i];
    }
    for (int i = 0; i < l; ++i) {
        str[m++] = zf[i];
    }
    str[m] = '\0';
}

int main() {

    char a[] = "sdf23g5h";

    fun(a);
    puts(a);
    return 0;
}
