#include <stdio.h>

#define MaxSize 100000

void fun(int n){

    int zsres[MaxSize];
    int k = 0;

    for (int i = 1; i < n; ++i) {
        int flag = 1;
        for (int j = 2; j < i-1; ++j) {
            if(i % j == 0){
                flag = 0;
                break;
            }
        }
        if(flag){
            zsres[k++] = i;
        }
    }

    int res[MaxSize];
    int l = 1;
    k = 0;
    while (n > 0){
        if(n == 1){
            break;
        }
        if(n % zsres[l] == 0){
            n = n / zsres[l];
            res[k++] = zsres[l];
        } else{
            l++;
        }
    }

    for (int i = 0; i < k; ++i) {
        printf("%d ",res[i]);
    }
}


int main() {

    int n = 180;
    fun(n);

    return 0;
}
