#include <stdio.h>
#include <math.h>
int main()
{
    double x, y, t;
    int i, n;
    scanf("%lf%d", &x, &n);
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
    return 0;
}


