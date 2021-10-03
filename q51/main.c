#include <stdio.h>


#define M 3
#define N 3

void fun(int a[M][N]);

int main() {

    int a[M][N] = {
            {100,400,700},
            {200,500,800},
            {300,600,900}
    };
    fun(a);
    return 0;
}

void fun(int a[M][N]){
    int arr[N][M];
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            arr[j][i] = a[i][j];
        }

    }

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}