#include<stdio.h>

int main() {

    int sum =0;
    int arr[5] = {10,20,30,40,50};
    int n = sizeof(arr) / sizeof(int);
    for (int i=0;i<n; i++) {
        sum +=arr[i];
    }
    printf("%d",sum);
    return 0;
}