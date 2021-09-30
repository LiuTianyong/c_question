#include <stdio.h>
#include <string.h>

int fun(char *str);

int main() {
    
    char *p = "abc598525cba";

    int res = fun(p);
    if(res == 1){
        printf("YES");
    } else{
        printf("NO");
    }
    return 0;
}
int fun(char *str){

    int len = strlen(str);
    for (int i = 0; i < len / 2; ++i) {
//        printf("%c ",str[i]);
        if(str[i] != str[len - i - 1]){
            return 0;
        }
    }
    return 1;
}