#include <stdio.h>

/**
 * �������ַ���תΪ����
 * @return
 */


int fun(char *p);
int main() {

    char *s= "1234";
    int res = fun(s);
    printf("ת�����:%d\n",res);

    char *s2= "-5771234";
    res = fun(s2);
    printf("ת�����:%d",res);
    return 0;
}
int fun(char *p){
    int number = 0;
    int flag = 1;   // 1Ϊ���� 0Ϊ����


    for (int j = 0; p[j]!='\0'; ++j) {
        if(p[j] == '-'){
            flag = 0;
            continue;
        }
        number = number * 10 + (p[j]-'0');
    }
    if(!flag){
        return 0-number;
    } else{
        return number;
    }
}