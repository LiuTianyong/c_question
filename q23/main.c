#include <stdio.h>

#define M 5

typedef struct Student{
    int id;
    double score;

} student;

void fun(student * a,student * b,int *n);
int main() {
    student a[M]= {
            {1,90l},
            {2,110l},
            {3,120l},
            {4,89l},
            {5,132l}
    };


    student b[M];
    int n;
    fun(a,b,&n);

    for (int i = 0; i < n; ++i) {
        printf("%d %lf \n",b[i].id,b[i].score);
    }
    return 0;
}

void fun(student * a,student * b,int *n){

    double sum = 0;
    for (int i = 0; i < M; ++i) {
        sum = sum + a[i].score;
    }

    double avg = sum / M;

    int k = 0;
    for (int i = 0; i < M; ++i) {
        if(a[i].score >= avg){
            b[k++] = a[i];
        }
    }

    *n = k;
}