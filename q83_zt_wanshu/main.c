#include <stdio.h>

int fun(int n);

int main() {

    int n = 6;
    int res = fun(n);
    if(res){
        printf("����");
    } else{
        printf("������");
    }
    return 0;
}

int fun(int n){

    int sum = 0;
    for (int i = 1; i < n; ++i) {
        if(n % i == 0){
            sum = sum + i;
        }
    }
    if(sum == n){
        return 1;
    } else {
        return 0;
    }
}