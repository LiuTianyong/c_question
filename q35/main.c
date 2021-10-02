#include <stdio.h>


#define N 5

void fun(int a[][N],int m);

int main() {

    int a[N][N] = {
            { 1, 2, 3, 4, 5},
            { 1, 2, 3, 4, 5},
            { 1, 2, 3, 4, 5},
            { 1, 2, 3, 4, 5},
            { 1, 2, 3, 4, 5}
    };
    fun(a,3);

    return 0;
}

/*
  1  6  9 12 15
  1  2  9 12 15
  1  2  3 12 15
  1  2  3  4 15
  1  2  3  4  5
 */
void fun(int a[][N],int m){
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if(j > i){
                a[i][j] = a[i][j] * m;
            }
        }
    }


    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
}