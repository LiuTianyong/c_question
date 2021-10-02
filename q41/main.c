#include <stdio.h>


int fun(int *a,int t,int *k);

int main() {

    int a[] = {876,675,896,101,301,401,980,431,451,777};
    int k ;
    int max = fun(a,10,&k);
    printf("index:%d  max:%d",k,max);
    return 0;
}

int fun(int *a,int t,int *k){

    int max = a[0];
    *k = 0;

    for (int i = 0; i < t; ++i) {
        if(a[i] > max){
            max = a[i];
            *k = i;
        }
    }
    return max;
}