#include <stdio.h>

#define M 3
#define N 4


void fun(char a[][N],char *res);

int main() {


    char arr[M][N] = {
            {'W','W','W'},
            {'S','S','S'},
            {'H','H','H'},
    };
    char b[M*N] = {};
    fun(arr,b);

    return 0;
}

void fun(char a[][N],char * res){

    int k = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            res[k] = a[j][i];
            k++;
        }
    }
    printf("%s",res);

}