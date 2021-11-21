#include <stdio.h>
#include <math.h>


double funcos ( double e, double x)
{
    double result = 0,temp = 1,fact = 1;
    int power = 0, sign = 1;

    while (temp >= e)
    {
        temp = pow(x, power)/fact;
        result += temp * sign;
        power += 2;
        fact *= (power)*(power - 1);
        sign *= -1;
    }
    return result;
}




int main()
{
    double x, y, t;
    int i, n=20;
    scanf("%lf", &x);
    y = 1;
    t = 1;
    for(i=1;i<=n;i++)
    {
        t *= x*x;
        t /= 2*i*(2*i-1);
        t *= -1;
        y += t;
    }
    printf("%.8lf\n", y);


    double res = funcos(0.01,60);
    printf("%lf",res);
    return 0;
}


