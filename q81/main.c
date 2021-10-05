#include <stdio.h>
#include <stdlib.h>


typedef struct student{

    int id;
    float score;
    char b[100];

} student;

#define N 5

int main() {

    FILE *fpw = fopen("../a.txt","w");

    student student1[N] = {
            {1,120.5f,"djfgfgffflkfjfj"},
            {2,125.5f,"15655"},
            {3,130.5f,"4525252"},
            {4,140.5f,"djfffl525252525kfjfj"},
            {5,145.5f,"sddddd"}
    };

    for (int i = 0; i < N; ++i) {
        fprintf(fpw,"%d %f %s\n",student1[i].id,student1[i].score,student1[i].b);
    }

    fclose(fpw);

    student s[5];

    FILE *fpr = fopen("../a.txt","r");
    if(fpr!=NULL){
        for (int i = 0; i < N; ++i) {
            fscanf(fpr,"%d %f %s",&s[i].id,&s[i].score,s[i].b);
        }
        fclose(fpr);

        for (int i = 0; i < N; ++i) {
            printf("%d %f %s\n",s[i].id,s[i].score,s[i].b);
        }
    } else{
        printf("打开失败");
    }

    return 0;
}
