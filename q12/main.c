#include <stdio.h>


typedef struct Student{
    int id;
    int score;
}Student;


int fun(Student *student,Student *b,int begin,int end);

int main() {

    Student student[5] = {
            {1,60},
            {2,80},
            {3,110},
            {4,90},
            {5,98},
    };


    Student b[10];

    int k = fun(student,b,50,100);
    for (int i = 0; i < k; ++i) {
        printf("id %d  score %d \n",b[i].id,b[i].score);
    }
    return 0;
}

int fun(Student *student,Student *b,int begin,int end){

    int k = 0;
    for (int i = 0; i < 5; ++i) {
        if(student[i].score > begin && student[i].score < end){
            b[k] = student[i];
            k++;
        }
    }
    return k;
}
