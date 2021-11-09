#include <stdio.h>

int main() {

    FILE * fp1 = fopen("../1.txt","r");

    if(fp1 == NULL)
    {
        printf("打开失败！");
    }

    char str[100];
    fgets(str,10,fp1);
    printf("%s\n",str);

    fclose(fp1);

    FILE * fp2 = fopen("../2.txt","r");
    if(fp2 == NULL){
        printf("0");
    }

    char str2[10000];
    fscanf(fp2,"%s",str2);
    printf("%s\n",str2);
    fclose(fp2);

    FILE * fp3 = fopen("../3.txt","r");

    char str3[1000];
    fread(str3,3,3,fp3);
    printf("%s",str3);
    fclose(fp3);
    return 0;
}
