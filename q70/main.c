#include <stdio.h>
#include "math.h"

double fun(double x[]);

int main() {

    double x[9] = {12.0,34.0,4.0,23.0,34.0,45.0,18.0,3.0,11.0};
    double sum = fun(x);
    printf("%lf",sum);
    return 0;
}


double fun(double x[]){

    double avg = 0.0,sum = 0.0;
    for (int i = 0; i < 8; ++i) {
        avg = (x[i] + x[i+1]) / 2;
        sum = sum + sqrt(avg);
    }

    return sum;
}























