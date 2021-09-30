#include <stdio.h>


#define M 100

void fun(int m,int *n,int *a);

int main() {


    int m = 50,n;
    int a[M];

    fun(m,&n,a);
    for (int i = 0; i < n; ++i) {
        printf("%d ",a[i]);
    }
    return 0;
}
void fun(int m,int *n,int *a){

    int k = 0;
    for (int i = 1; i <= m; ++i) {
        if(i % 7 == 0 || i % 11 == 0){
            a[k++] = i;
        }
    }
    *n = k;

}