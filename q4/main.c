#include <stdio.h>
#include <stdlib.h>

#define N 10


int * fun(int age[],int[10]);
int main() {
    int age[N];
    int d[11] = {0};
    int *res = d;
    for (int i = 0; i < N; ++i) {
        age[i] = rand() % 150;
        printf("%d ",age[i]);
    }
    printf("\n");
    res = fun(age,d);
    for (int i = 0; i < 11; ++i) {
        printf("%d ",d[i]);
    }
    return 0;
}
int * fun(int age[N],int d[10]){
    for (int i = 0; i < N; ++i) {
        int k = age[i] / 10;
        if(k >= 10){
            d[10]++;
            continue;
        }
        d[k]++;
    }
    return d;
}

