#include <stdio.h>




int fun(char *p);

int main() {

    char *str= "djf fhfh fhhff fjfhfh";

    int count = fun(str);
    printf("%d ",count);
    return 0;
}
int fun(char *p){
    int count = 1;
    for (int i = 0; p[i]!='\0' ; ++i) {
        if(p[i] == ' '){
            count++;
        }
    }
    return count;
}
