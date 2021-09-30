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

    int p;
    fun(a,&p);

    printf("\n%d ",p);
    return 0;
}
void fun(int b[M][N],int *n){

    int k = 0;
    int res[M*N] = {};

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            res[k] = b[i][j];
            k++;
        }
    }
    *n = k;

    for (int i = 0; i < M*N; ++i) {
        printf("%d ",res[i]);
    }
}