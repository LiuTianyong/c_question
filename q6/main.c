#include <stdio.h>
#include <string.h>

#define M 3
#define N 10

void fun(char arr[M][N],char *b);
int main() {

    char arr[M][N] = {
            "AAAAAAA",
            "BBBB",
            "CCCCCC"
    };
    char b[50] = {};
    fun(arr,b);

    return 0;
}

void fun(char arr[M][N],char *b){
    char *p = b;
    for (int i = 0; i < M; ++i) {
        strcat(b,arr[i]);
    }
    printf("%s",b);
}


