#include <stdio.h>

/*
 * 整数反转
 */
int reverse(long x){

    int flag = 0;   // 0整数 1负数
    if(x==0){
        return 0;
    } else if(x < 0){
        x = -x;
        flag = 1;
    }

    long a[32] = {0};
    int k = 0;
    while (x > 0){
        int temp = x % 10;
        x = x / 10;
        a[k++] = temp;
    }

    long long sum = 0;
    for (int i = 0; i < k; ++i) {
        sum = sum * 10 + a[i];
    }

    if(flag){
        return -sum;
    }
    return sum;

}
int main() {

    int a = 1534236469;
    printf("%d", reverse(a));
    return 0;
}
