#include <stdio.h>
#include "stdlib.h"


#define N 5

typedef struct student{
    int id;
    int socre;
} student;

int fun(student *student1,student * student2);

int main() {
    student student1[N] = {
            {1,80},
            {2,99},
            {3,56},
            {4,80},
            {5,56}
    };

    student student2[5];

    int n = fun(student1,student2);
    for (int i = 0; i < n; ++i) {
        printf("%d  %d \n",student2[i].id,student2[i].socre);
    }

    return 0;
}

int fun(student *student1,student * student2){
    int number = 0;
    int min = student1[0].socre;

    for (int i = 0; i < N; ++i) {
        if(student1[i].socre < min){
            min = student1[i].socre;
        }
    }

    int k = 0;
    for (int i = 0; i < N; ++i) {
        if(student1[i].socre == min){
            student2[k] = student1[i];
            k++;
            number++;
        }
    }

    return number;

}
