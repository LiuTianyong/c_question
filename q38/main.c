#include <stdio.h>
#include "math.h"


double fun(int n);

int main() {
    int n = 1000;
    printf("%lf", fun(n));
    return 0;
}

double fun(int n){

    int sum = 0;

    for (int i = 0; i < n; ++i) {
        if(i % 3 == 0 && i % 7 == 0){
            sum = sum + i;
        }
    }

    return sqrt(sum);
}