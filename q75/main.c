#include<stdio.h>
#include "math.h"


double fun(int m);

int main()
{

    printf("%lf", fun(20));
	return 0;
}

double fun(int m){
    double s = 0.0;


    for (int i = 1; i <=m ; ++i) {
        s = s + log(i * 1.0);
    }
    s = sqrt(s);
    return s;
}