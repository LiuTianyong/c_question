#include <stdio.h>



typedef struct student{
    int id;
    float score;
    char str[20];
}student;

int main() {

    student s[5] = {
            {1,150.0f,"dhfgfgf"},
            {2,124.0f,"55555f7fdf82"},
            {3,150.0f,"fdjhgdgkd"},
            {4,130.0f,"fdgkhhdfkd878"},
            {5,115.0f,"58855dkmgjkdk"}
    };

    FILE *fpw;

    fpw = fopen("../a.txt","wb");

    if(fpw!=NULL){
        for (int i = 0; i < 5; ++i) {
            fwrite(&s[i],sizeof(student),1,fpw);   // 缓冲区 每个大小按字节计算 多少个  文件指针
        }
    }
    fclose(fpw);

    student res[5];

    FILE *fpr;
    fpr = fopen("../a.txt","rb");
    if(fpr!=NULL){
        for (int i = 0; i < 5; ++i) {
            fread(&res[i],sizeof(student),1,fpr);
        }
    }

    for (int i = 0; i < 5; ++i) {
        printf("%d %f %s\n",res[i].id,res[i].score,res[i].str);
    }
    fclose(fpr);
    return 0;
}
