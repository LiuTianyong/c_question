#include <stdio.h>


void fun(char *str,char *substr);

int main() {

    char str[] = "asd asasdfg asd as zx67 asd mkio ased ahs";
    char substr[] = "as";

    fun(str,substr);

    return 0;
}

void fun(char *str,char *substr){

    int number = 0;
    for (int i = 0; str[i] != '\0'; ++i) {

        int flag = 1;
        for (int j = 0; substr[j] != '\0'; ++j) {
            if(substr[j] != str[i+j]){
                flag = 0;
                break;
            }
        }

        if(flag){
            number++;
        }
    }

    printf("%d",number);

}