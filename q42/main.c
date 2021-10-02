#include <stdio.h>


int F(int n);
void fun(int n);

int main() {

    fun(1000);

    return 0;
}

void fun(int n){
    for (int i = 0; i < n; ++i) {
        if(F(i) > n){
            printf("%d", F(i));
            break;
        }
    }
}
int F(int n){

    if(n == 0) return 0;
    if(n == 1) return 1;

    return F(n-1) + F(n-2);
}
