#include <stdio.h>

void fun(int begin,int end){

    for (int i = begin + 1; i < end; ++i) {

        int flag = 1;
        for (int j = 2; j < i - 1; ++j) {
            if(i % j == 0){
                flag = 0;
                break;
            }
        }

        if(flag){
            printf("%d ",i);
        }
    }
}
int main() {
    fun(101,200);
    return 0;
}
