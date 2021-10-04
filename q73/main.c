#include <stdio.h>


double fun(int n);
int main() {

    int n;

    scanf("%d",&n);

    printf("%lf", fun(n));
    return 0;
}
double fun(int n){
    double s = 1.0;
    long t = 1;

    for (int i = 1; i <= n; ++i) {
        t = t * i;
        s = s + 1.0/t;
    }
    return s;
}