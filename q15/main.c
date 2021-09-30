#include <stdio.h>


#define M 4
#define N 5

int fun(int a[][N]);

int main() {

    int a[M][N]  = {
            {1,3,5,7,9},
            {2,9,9,9,4},
            {6,9,9,9,8},
            {1,3,5,7,0}
    };
    int sum = fun(a);
    printf("%d ",sum);

    return 0;
}
int fun(int a[][N]){
    int sum = 0;

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {

            if(i == 0 || i == M - 1 || j == 0 || j == N-1){
                sum = sum + a[i][j];
            }

        }
    }
    return sum;
}