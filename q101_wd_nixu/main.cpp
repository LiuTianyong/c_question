#include <iostream>


void fun(int * arr,int n){
    for (int i = 0; i < n/2; ++i) {
        int temp = arr[i];
        arr[i] = arr[n - i -1];
        arr[n-1-i] = temp;
    }

    for (int i = 0; i < n; ++i) {
        printf("%d ",arr[i]);
    }
}

int main() {

    int array[11] = {1,2,3,4,5,6,7,8,9,10,11};
    fun(array,11);
    return 0;
}
