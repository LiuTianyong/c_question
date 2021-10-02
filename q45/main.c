#include <stdio.h>


void fun(int n,int k);

int main() {

    fun(17,5);

    return 0;
}

void fun(int n,int k){

    int a[100];
    int l = 0;

    for (int i = 1; 1; ++i) {

        int flag = 1;
        for (int j = 2; j < n+i-1; ++j) {
            if((n + i) % j == 0){
                flag = 0;
                break;
            }
        }
        if(flag){
           a[l++] =  n + i;
        }
        if(l > k) break;
    }

    for (int i = 0; i < k; ++i) {
        printf("%d ",a[i]);
    }
}