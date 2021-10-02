#include <stdio.h>


void fun(char *str);

int main() {
    char str[] = "abc4EFg";
    fun(str);
    return 0;
}

void fun(char *str){

    for (int i = 0; str[i] != '\0' ; ++i) {
        if(str[i] > 'a' && str[i] < 'z' && i % 2 == 1)
            str[i] = str[i] + 'A' - 'a';
     }

    printf("%s",str);
}