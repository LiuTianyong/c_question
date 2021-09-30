#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double fun(double eps);

int main(){

    double eps = 0.00005f;
    double pi = fun(eps);
    printf("%lf ",pi);

    return 0;
}

double fun(double eps){
    float s=1;
    float pi=0;
    float i=1.0;
    float n=1.0;

    while(fabs(i) >= eps){
        pi+=i;
        n=n+2;
        // 这里设计的很巧妙，每次正负号都不一样
        s=-s;
        i=s/n;
    }
    pi=4*pi;

    return pi;
}