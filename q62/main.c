#include <stdio.h>


void fun(int m,int xx[],int *k);

int main() {

    int xx[1000];
    int k;

    fun(17,xx,&k);

    for (int i = 0; i < k; ++i) {
        printf("%d ",xx[i]);
    }
    return 0;
}


void fun(int m,int xx[],int *k){

    int n = 0;
    for (int i = 2; i < m; ++i) {

        int flag = 1;
        for (int j = 2; j < i - 1; ++j) {
            if(i % j == 0){
                flag = 0;
            }
        }
        if(!flag){
            xx[n++] = i;
        }
    }
    *k = n;
}