#include<stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    int coutn =0;
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (arr[i]%2 !=0 && arr[j]%2 ==0) {
                coutn++;
            } if (arr[i]%2 ==0 && arr[j]%2 !=0) {
                coutn++;
            }
        }
    }
    printf("%d",coutn);
    return 0;
}