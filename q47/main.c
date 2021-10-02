#include <stdio.h>
#include "math.h"


float fun();

int main() {

    float f = fun();

    printf("%f",f);
    return 0;
}

float fun()
{
    float x1=0.0,x0;
    while(1)
    {
        x0=x1;
        x1=cos(x0);
        if(fabs(x0-x1)<0.000001)
            break;
    }
    return x1;
}