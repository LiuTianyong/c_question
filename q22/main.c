#include <stdio.h>

#define M 1000

void fun(int *a,int *n);

int main() {

    int a[M],n;
    fun(a,&n);
    for (int i = 0; i < n; ++i) {
        printf("%d ",a[i]);
    }

    return 0;
}

void fun(int *a,int *n){

    int k = 0;
    for (int i = 1; i <= 1000; ++i) {
        if(i % 7 == 0||i % 11 == 0){
            if(i % 7== 0 && i % 11==0 ){
                continue;
            } else{
                a[k++] = i;
            }
        }
    }
    *n=k;

}