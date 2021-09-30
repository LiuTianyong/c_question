#include <stdio.h>

#define M 3
#define N 4


void fun(int b[M][N],int *n);

int main() {

    int a[M][N] = {
            {33,33,33,33},
            {44,44,44,44},
            {55,55,55,55}
    };

    int p = 0;
    fun(a,&p);
    printf("\n%d ",p);
    return 0;
}

void fun(int b[M][N],int *n){
    int res[M*N] = {};

    int k = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            res[k] = b[j][i];
            k++;
        }
    }
    *n = k;
    for (int i = 0; i < M*N; ++i) {
        printf("%d  ",res[i]);
    }
}
