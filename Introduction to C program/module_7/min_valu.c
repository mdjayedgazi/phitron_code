#include<stdio.h>
#include<limits.h>

int main() {

    int n,min = INT_MAX;
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    for (int i=0; i<n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("%d",min);
    return 0;
}