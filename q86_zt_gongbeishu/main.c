#include <stdio.h>


// ��С������
int fun1(int a,int b);
// ���Լ��
int fun2(int a,int b);

int main() {

    int a = 6,b = 24;

    printf("��С��������%d  ���Լ����%d", fun1(a,b), fun2(a,b));
    return 0;
}

// ��С������
int fun1(int a,int b){

    int max = a > b ? a:b;
    printf("max:%d\n",max);

    for (int i = max; i <= a*b; ++i) {
        if(i % a == 0 && i % b==0){
            return i;
        }
    }
}
// ���Լ��
int fun2(int a,int b){

    int min = a < b ? a:b;
    printf("min:%d\n",min);
    for (int i = min; i > 0; i--) {
        if(a % i == 0 && b % i == 0){
            return i;
        }
    }
}