#include <stdio.h>


void fun(char *s);

int main() {

    char s[] = "abc4EFg";
    fun(s);
    return 0;
}

void fun(char *s){


    for (int i = 0; s[i] != '\0' ; ++i) {
        if(i % 2==1 && s[i] >= 'a' && s[i]<= 'z'){
            s[i] = s[i] - 32;
        }
    }

    printf("%s",s);
}