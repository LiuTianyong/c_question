#include <stdio.h>

#define N 5

typedef struct student{
    int id;
    float score;

}student;

void fun(student s[]);

int main() {

    student s[N] = {
            {1,135},
            {3,99},
            {2,125},
            {4,116},
            {5,142},
    };

    fun(s);

    for (int i = 0; i < N; ++i) {
        printf("%d %f\n",s[i].id,s[i].score);
    }
    return 0;
}

void fun(student s[]){
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if(s[j].score < s[j+1].score){
                student temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }


}