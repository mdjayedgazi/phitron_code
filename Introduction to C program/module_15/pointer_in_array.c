#include<stdio.h>

int main() {

    int arr[5] = {10,20,30,40,50};
    *(arr+0) = 100;
    *(arr+1) = 200;
    *(arr+2) = 300;
    *(arr+3) = 400;
    *(arr+4) = 500;
    for (int i=0; i<5; i++) {
        printf("%d\n",arr[i]);
    }
    return 0;
}