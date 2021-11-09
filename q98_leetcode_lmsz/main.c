#include <stdio.h>
#include "string.h"
#include "stdlib.h"

/*
    I             1
    V             5
    X             10
    L             50
    C             100
    D             500
    M             1000
 */

char * fun1(int n){

    switch (n) {
        case 1:
            return "I";
        case 4:
            return "IV";
        case 5:
            return "V";
        case 9:
            return "IX";
        case 10:
            return "X";
        case 40:
            return "XL";
        case 50:
            return "L";
        case 90:
            return "XC";
        case 100:
            return "C";
        case 400:
            return "CD";
        case 500:
            return "D";
        case 900:
            return "CM";
        case 1000:
            return "M";
        default:
            return " ";
    }
}

char * intToRoman(int num){
    if (num >= 1 && num <= 3999){
        int temps[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};

        char * resStr = malloc(sizeof(char) * 16);
        resStr[0] = '\0';
        int i = 0;

        while(num > 0){
            if(num >= temps[i]){
                num = num - temps[i];
                strcpy(resStr + strlen(resStr), fun1(temps[i]));
            } else{
                if (i == 12) continue;
                i++;
            }
        }
        return resStr;
    } else{
        return "";
    }

}

int main() {

    int num  = 1994;
    char * resStr = intToRoman(num);
    printf("%s",resStr);
    return 0;
}
