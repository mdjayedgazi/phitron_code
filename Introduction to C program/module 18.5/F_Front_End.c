#include<stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }

    int i=0,j=n-1;
    while (i<j) {
        printf("%d ",arr[i]);
        printf("%d ",arr[j]);
        
        i++;
        j--;
        if (i==j) {
            printf("%d",arr[i]);
        }
    }
    return 0;
}