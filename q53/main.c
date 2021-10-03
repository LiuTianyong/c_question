#include <stdio.h>


float fun(float f);

int main() {

    float a = 1234.567;

    float res = fun(a);
    printf("%f", res);
    return 0;
}

float fun(float f) {

    long a;
    a = f * 100 + 0.5;
    return (float) a / 100;
}
