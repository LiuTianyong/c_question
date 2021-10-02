#include <stdio.h>
#include "string.h"

#define NUM 5

void fun(char (*a)[81],int num,char **max);

int main() {

    char a[NUM][81] = {
            "dkhghgjgkjkjg55475647545764jkg",
            "fjfhfhfh",
            "djfjfjggjdl",
            "dj55555dl",
            "djf99999999999525114jdl"
    };

    char *max;
    fun(a,5,&max);
    return 0;
}

void fun(char (*a)[81],int num,char **max){
    int maxlen = strlen(a[0]);

    *max = a[0];
    for (int i = 0; i < num; ++i) {
        if(strlen(a[i]) >  maxlen){
            *max = a[i];
            maxlen = strlen(a[i]);
        }
    }

    printf("%s",*max);
}