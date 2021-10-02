#include <stdio.h>


void fun(char *str);

int main() {

    char a[] = "abcdefgabcdeabc";
    fun(a);
    return 0;
}

void fun(char *str){

    int res[26] = {0};

    for (int i = 0; str[i] != '\0'; ++i) {
        res[str[i] - 'a']++;
    }

    for (int i = 0; i < 26; ++i) {
        printf("%d ",res[i]);
    }
}