#include <stdio.h>


void fun(int n);

int main() {

    int n = 256;
    fun(n);
    return 0;
}

void fun(int m) {

    for (int i = 1; i < m; ++i) {

        int n = i * i;

        int w[16] = {0};

        int k = 0;
        while (n > 0) {
            int temp = n % 10;
            n = n / 10;
            w[k++] = temp;
        }

        int flag = 1;
        for (int j = 0; j < k / 2; ++j) {
            if (w[j] != w[k - 1 - j]) {
                flag = 0;
            }
        }

        if(flag){
            printf("%d  %d\n",i,i * i);
        }
    }

}