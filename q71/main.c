#include <stdio.h>
#include "math.h"

double fun(double x[]);
int main() {

    double x[] = {95.0,89.0,76.0,65.0,88.0,72.0,85.0,81.0,90.0,56.0};
    double s = fun(x);

    printf("%lf",s);
    return 0;
}

double fun(double x[]){
    double sum = 0.0;
    for (int i = 0; i < 10; ++i) {
        sum = sum + x[i];
    }
    double avg = sum / 10;

    sum = 0.0;
    for (int i = 0; i < 10; ++i) {
        sum = sum + (x[i] - avg) * (x[i] - avg);
    }

    return sqrt(sum / 10);
}