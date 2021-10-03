#include <stdio.h>

#define N 5

typedef struct student{

    int id;
    int score;

} student;

student fun(student * s);
int main() {

    student s[N] = {
            {1,99},
            {2,95},
            {3,150},
            {4,142},
            {5,89}
    };
    student res = fun(s);
    printf("%d %d",res.id,res.score);
    return 0;
}

student fun(student * s){

    student res = s[0];
    int maxScore = s[0].score;

    for (int i = 0; i < N; ++i) {
        if(s[i].score > maxScore){
            res = s[i];
        }
    }

    return res;
}