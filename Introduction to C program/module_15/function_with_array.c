#include<stdio.h>

void fun(int a[]) {
    a[2] = 300;
}
int main() {

    int arr[5] = {10,20,30,40,50};
    fun(arr);
    for (int i=0; i<5; i++) {
        printf("%d\n",arr[i]);
    }
    return 0;
}