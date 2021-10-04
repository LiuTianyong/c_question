#include <stdio.h>
#include "math.h"

void fun(int n);

int main() {

    fun(100);
    return 0;
}

void fun(int n){

    float sum = 0.0;

    for (int i = 3; i <=n ; ++i) {
        int flag = 1;

        for (int j = 2; j < i - 1; ++j) {
            if(i % j == 0){
                flag = 0;
            }
        }
        if(flag){
            sum = sum + sqrt(i);
        }
    }

    printf("%f",sum);
}