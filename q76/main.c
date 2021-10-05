#include <stdio.h>


typedef struct student{
    int id;
    int score;
}student;

student fun(student *s,int id);
int main() {


    student s[5] = {
            {1,125},
            {2,99},
            {3,117},
            {4,128},
            {5,135}
    };

    int id;

    scanf("%d",&id);

    student res = fun(s,id);

    printf("%d %d",res.id,res.score);
    return 0;
}

student fun(student *s,int id){

    student student1;
    student1.id = 0;
    student1.score = -1;

    for (int i = 0; i < 5; ++i) {
        if(s[i].id == id){
            student1 = s[i];
        }
    }

    return student1;
}