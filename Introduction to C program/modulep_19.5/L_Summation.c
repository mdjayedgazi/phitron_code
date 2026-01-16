#include<stdio.h>

long long int sum = 0;
void summation(int arr[],int n, int a) {
    if (n == a) {
        printf("%lld",sum);
        return;
    }

    sum += arr[a];
    summation(arr,n,a+1);
}

int main() {

    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    summation(arr,n,0);
    return 0;
}