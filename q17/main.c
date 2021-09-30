#include <stdio.h>
#include "stdlib.h"
#include "math.h"

#define MaxSize 100

int fun(int lim,int a[MaxSize]);

int main() {

    int b[MaxSize];

    int n = fun(10,b);

    return 0;
}

int fun(int lim,int a[MaxSize]){

    int numer = 0;
    int k = 0;
    for (int i = 1; i <= lim; ++i) {
        int m = (int)sqrt( (double)i );
        int flag = 1;
        for (int j = 2; j <= m; ++j) {
            if(i % j == 0){
                flag = 0;
                break;
            }
        }
        if(flag){
            a[k] = i;
            k++;
            numer++;
        }
    }

    for (int i = 0; i < numer; ++i) {
        printf("%d ",a[i]);
    }

    return numer;
}