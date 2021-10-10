#include <stdio.h>

#define MaxSize 5

typedef struct QLink{
    int data[MaxSize];
    int len;
} QLink;

void fun(QLink *qLink){

    for (int i = 0; i < qLink->len; ++i) {
        for (int j = 0; j < qLink->len - i - j; ++j) {
            if(qLink->data[j] < qLink->data[j + 1]){
                int temp = qLink->data[j];
                qLink->data[j] = qLink->data[j+1];
                qLink->data[j + 1] = temp;
            }
        }
    }

}

int main() {

    return 0;
}
