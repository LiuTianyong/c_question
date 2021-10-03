#include <stdio.h>

void fun(int a[],int n,int *index,int *max);
int main() {

    int a[] = {1,5,56,35,2,5,665,999};
    int n = 8;

    int index,max;
    fun(a,n,&index,&max);
    printf("%d %d",index,max);
    return 0;
}

void fun(int a[],int n,int *index,int *max){

    *max = a[0];
    *index = 0;
    for (int i = 0; i < n; ++i) {
        if(a[i] > *max){
            *max = a[i];
            *index = i;
        }
    }
}