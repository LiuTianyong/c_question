#include <stdio.h>


#define M 3
#define N 4

void fun(int tt[M][N],int pp[N]);

int main() {

    int tt[M][N] = {
            {2,8,3,85},
            {9,7,5,6},
            {8,5,9,8}
    };

    int pp[N];
    fun(tt,pp);

    return 0;
}

void fun(int tt[M][N],int pp[N]){

    for (int i = 0; i < N; ++i) {
        int min = tt[0][i];
        for (int j = 0; j < M; ++j) {
            if(tt[j][i] < min){
                min = tt[j][i];
            }
        }
        pp[i] = min;
    }

    for (int i = 0; i < N; ++i) {
        printf("%d ",pp[i]);
    }
}
