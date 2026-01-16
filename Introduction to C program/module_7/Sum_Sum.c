#include<stdio.h>

int main() {

    int n;
    int posum = 0;
    int nesum = 0;
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    for (int i=0; i<n; i++) {
        if (arr[i] >= 0) {
            posum+=arr[i];
        } else {
            nesum+=arr[i];
        }
    }
    printf("%d %d",posum,nesum);
    return 0;
}