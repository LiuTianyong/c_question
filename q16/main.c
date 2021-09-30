#include <stdio.h>


#define M 3
#define N 5

double fun(int a[][N]);

int main() {
    int a[M][N] = {
            {2,3,8,3,1},
            {4,5,6,8,2},
            {5,9,1,4,1}
    };

    printf("%lf", fun(a));
    return 0;
}

double fun(int a[][N]){

    double sum = 0;
    int n = 0;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            if(i == 0 || i == M - 1 || j == 0 || j == N - 1){
                sum = sum + a[i][j];
                n++;
            }
        }
    }

    return sum / n;
}