#include <stdio.h>
#include "string.h"



int main() {

    /*
     * a 1 1 1 1  1 1 1 1
     * b 0 0 0 0  0 0 0 1
     * <<0 0 0 1  0 0 0 0
     * & 0 0 0 1  0 0 0 0
     * ~ 1 1 1 0  1 1 1 1
     */
    unsigned char a=0xff,b=0x01,c;
    b=b<<4;
    printf("%d\n",b);
    c=~(a&b);
    printf("%d",c);
    return 0;
}
