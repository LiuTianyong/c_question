#include<stdio.h>
#include<stdlib.h>

int main() {
    char file_name[20] = "../a.txt";
    FILE *fpw = fopen(file_name, "w");

    char str[100] = "abcdefghigklmnopqrstuvwxyz";
    if (NULL == fpw) {
        printf("´ò¿ªÊ§°Ü\n");
        exit(0);
    }

    fputs(str,fpw);

    fclose(fpw);


    FILE *fpr = fopen(file_name,"r");
    char res[100];

    fgets(res,5,fpr);
    printf("%s",res);
    fclose(fpr);

    return 0;
}