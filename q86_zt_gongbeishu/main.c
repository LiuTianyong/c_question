#include <stdio.h>


// 最小公倍数
int fun1(int a,int b);
// 最大公约数
int fun2(int a,int b);

int main() {

    int a = 6,b = 24;

    printf("最小公倍数：%d  最大公约数：%d", fun1(a,b), fun2(a,b));
    return 0;
}

// 最小公倍数
int fun1(int a,int b){

    int max = a > b ? a:b;
    printf("max:%d\n",max);

    for (int i = max; i <= a*b; ++i) {
        if(i % a == 0 && i % b==0){
            return i;
        }
    }
}
// 最大公约数
int fun2(int a,int b){

    int min = a < b ? a:b;
    printf("min:%d\n",min);
    for (int i = min; i > 0; i--) {
        if(a % i == 0 && b % i == 0){
            return i;
        }
    }
}