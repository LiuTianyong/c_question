#include <stdio.h>

#define MaxSize 1000
int main() {

    FILE * fp1 = fopen("../1.txt","w");

    char str[MaxSize] = "aaaaaaaaaaaaa";
    char * p = str;

    fputs(p,fp1);

    fclose(fp1);

    FILE * fp2 = fopen("../2.txt","w");
    fwrite(str, sizeof(str),1,fp2);
    fclose(fp2);

    FILE * fp3 = fopen("../3.txt","w");
    fprintf(fp3,"%s",p);
    fclose(fp3);


    return 0;
}
