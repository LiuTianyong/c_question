#include <stdio.h>

void fun();

int main() {

    fun();
    return 0;
}

void fun(){

    for (int i = 100; i < 1000; ++i) {
        int g = i % 10;
        int s = i /10 % 10;
        int b = i / 100;

        if(g*g*g + s*s*s +b*b*b == i){
            printf("Ë®ÏÉ»¨£º%d\n",i);
        }
    }
}