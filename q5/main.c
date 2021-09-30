#include <stdio.h>

#define N 10

int *fun(int a[],int b[]);

int main() {

    int a[N] =  {1, 3, 4, 7, 7, 9, 9 ,11,15, 15,};
    int *b = fun(a,a);
    while (*b != '\0'){
        printf("%d ",*(b++));
    }
    return 0;
}

int *fun(int a[],int b[]) {

    int j = 0;
    for (int i = 0; i < N; ++i) {
       if(b[i] != a[i+1]){
           b[j] = a[i];
           j++;
       }
    }
    b[j] = '\0';


    return b ;
}