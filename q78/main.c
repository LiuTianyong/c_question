#include <stdio.h>


typedef struct student {
    int id;
    double score;
} student;

#define N 5

int fun(student *a, student *b);

int main() {

    student stu[5] = {
            {1, 125.0},
            {2, 135.0},
            {3, 115.0},
            {4, 135.0},
            {5, 122.0}
    };
    student stus[5];
    int k = fun(stu, stus);
    for (int i = 0; i < k; ++i) {
        printf("%d %lf\n",stus[i].id,stus[i].score);
    }
    return 0;
}

int fun(student *a, student *b) {

    double max = a[0].score;
    for (int i = 0; i < N; ++i) {
        if (a[i].score > max) {
            max = a[i].score;
        }
    }

    int k = 0;
    for (int i = 0; i < N; ++i) {
        if (a[i].score == max) {
            b[k++] = a[i];
        }
    }

    return k;
}