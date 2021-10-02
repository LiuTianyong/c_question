#include <stdio.h>



double fun(int n);

int main() {
    int n = 10;
    double sum = fun(n);
    printf("%lf",sum);
    return 0;
}

double fun(int n){

    double sum = 0.0f;
    int a = 1,b = 2;

    for (int i = 0; i < n; ++i) {
        sum = sum + 1.0 / (a*b);
        b++;
        a++;
    }
    return sum;
}