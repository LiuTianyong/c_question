#include <stdio.h>
#include "string.h"


void fun(char * str){

    int count = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if(str[i] == 'a'){
            count++;
        }
    }

    FILE * fp = fopen("../abc.txt","w");

    if(fp == NULL){
        printf("´ò¿ªÊ§°Ü£¡");
        return;
    }

    fprintf(fp,"%d",count);
    fclose(fp);

}

int main() {

    char str[] = "djdhaaahfhaaahfhf";
    fun(str);

    return 0;
}
