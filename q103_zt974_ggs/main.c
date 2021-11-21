#include <stdio.h>
#include "math.h"


void fun(){


    int l = 0;
    for (int i = 1; i < 100; ++i) {
        for (int j = i; j < 100; ++j) {
            int k = (int )sqrt(i * i + j * j);
            if((k < i + j) &&(k > j - i) && (i*i + j*j == k*k) && (k<=100)){
                printf("%d %d %d\n",i,j,k);
                l++;
            }
        }
    }
    printf("%d",l);


}

int main() {
    fun();
    return 0;
}
