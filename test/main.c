#include <stdio.h>
#include "string.h"



int main() {

   float x = 10.0f,y;

//   y  = int(x) / 10;
//   y = (-x)++;

    y = x+(y=3);

    char a[] = "hello!";
    char b[20] = {'h','e','l','l','o','!'};
    printf("%d %d\n",sizeof(a),sizeof (b));

    char c[ ]="\xah0\0y\"AB";
    int i;
    i=0; while(c[i]!=0) {
        printf("%c\t",c[i]);
        i++;
    }
    printf("%d\n",i);
    printf("%x",0);
    return 0;
}
