#include <stdio.h>


void fun(char *str,char t[]);

int main() {
    char ch[] = "ABCDEFG12345";
    char res[11];
    fun(ch,res);
    for (int i = 0; res[i]!='\0' ; ++i) {
        printf("%c ",res[i]);
    }
    return 0;
}


void fun(char *str,char t[]){
    int k = 0;
    int i = 0;
    for (i = 0; str[i] != '\0'; ++i) {
        if(str[i] % 2 == 1){
            t[k] = str[i];
            k++;
        }
    }
    t[i] = '\0';
}