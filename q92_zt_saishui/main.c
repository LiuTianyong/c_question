#include <stdio.h>
#include "math.h"


#define N 8

void fun(float a[],int n,float res[],int *m){

    // 从大到小排序
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if(a[j] < a[j+1]){
                float temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    // 从大到小挨个取值计算
    float sum = 0.0f;
    int k  = 0;
    for (int i = 0; i < n; ++i) {
        float r = a[i];
        sum = sum + 2 * sqrt(r * r-1);
        res[k++] = r;
        if(sum > 20) {
            break;
        }
    }

    *m = k;
}

int main() {
//    int n = N;
//    float a[] = {2.0f,3.2f,4.0f,4.5f,6.0f};

    int n = N;
    float a[] = {1.2f,3.3f,2.5f,3.1f,4.0f,4.2f,2.0f,5.0f};

    int m;
    float res[N];

    fun(a,n,res,&m);
    for (int i = 0; i < m; ++i) {
        printf("%f ",res[i]);
    }
    return 0;
}
