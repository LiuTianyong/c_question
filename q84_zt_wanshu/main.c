#include <stdio.h>


void fun(int n);

int main() {

    int n = 10000;
    fun(n);
    return 0;
}


void fun(int n){

    for (int i = 1; i <= n; ++i) {
        int sum = 0;
        for (int j = 1; j < i; ++j) {
            if(i % j == 0){
                sum = sum + j;
            }
        }
        if(i == sum){
            printf("ÍêÊý£º%d\n",i);
        }

    }
}