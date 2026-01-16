#include<stdio.h>
#include<limits.h>

int max = INT_MIN;
void maxm(int ar[],int n, int a) {
    if (n == a) {
        printf("%d",max);
        return;
    }

    if (ar[a] > max) {
        max = ar[a];
    }
    maxm(ar,n,a+1);
}

int main() {

    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    maxm(arr,n,0);
    return 0;
}