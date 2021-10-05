#include <stdio.h>

float fun(int n);
int main() {

    int n = 11;
    float sum = fun(n);
    printf("%f",sum);
    return 0;
}

float fun(int n){

    int s = 0;
    float sum = 0;

    for (int i = 1; i <=n ; ++i) {
        s = s + i;
        sum = sum + 1.0 / s;
    }

    return sum;
}
