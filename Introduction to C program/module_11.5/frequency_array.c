#include<stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    int freArr [10] = {0};
    
    for (int i=0; i<n; i++) {
        freArr[arr[i]] ++;
    }
    for (int i=0; i<n; i++) {
        printf("%d -> %d\n",i,freArr[i]);
    }
    return 0;
}