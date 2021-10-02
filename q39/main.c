#include <stdio.h>


double fun1(int m,int n);

long fun2(int n);

int main() {

    double P = fun1(12,8);
    printf("%lf",P);
    return 0;
}

double fun1(int m,int n){

    double p = 1.0*fun2(m) / (fun2(n) * fun2(m-n));
    return p;
}

long fun2(int n){
    long sum = 1;

    for (int i = 1; i <= n; ++i) {
        sum = sum * i;
    }
    return sum;
}