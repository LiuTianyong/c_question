#include <stdio.h>


void fun(int n);
int main() {

    fun(20);
    return 0;
}

void fun(int n){

    double sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        if(i % 9 == 0 || i % 5 == 0){
            sum = sum + 1.0 / i;
        }
    }
    printf("%lf",sum);
}
