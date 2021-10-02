#include <stdio.h>


float fun(float *a,int n);

int main() {

    float a[5] = {90.5f,72,80,61.5f,55};
    float avg = fun(a,5);
    printf("%.2f",avg);
    return 0;
}
float fun(float *a,int n){

    float sum = 0.0f,avg = 0.0f;

    for (int i = 0; i < n; ++i) {
        sum = sum + a[i];
    }

    return sum / n;
}