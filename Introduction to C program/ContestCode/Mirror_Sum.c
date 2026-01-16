#include<stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for (int i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    for (int i=0; i<n; i++) {
        scanf("%d",&b[i]);
    }
    int i=0;
    int j=n-1;
    for (int k=0;k<n;k++) {
        int sum = (a[i] + b[j]);
        printf("%d ",sum);
        i++;
        j--;
    }
    return 0;
}