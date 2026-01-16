#include<stdio.h>
#include<limits.h>

int main() {

    int t,n;
    scanf("%d",&t);
    for (int tt = 1; tt<=t; tt++) {

        scanf("%d",&n);
        int arr[n+1];
        for (int i=1; i<=n; i++) {
            scanf("%d",&arr[i]);
        }
        int smallest = INT_MAX;
        for (int i=1; i<n; i++) {
            for (int j=i+1; j<=n; j++) {
                int tpm = arr[i] + arr[j] + (j-i);
                if (smallest > tpm) {
                    smallest = tpm;
                }
            }
        }
        printf("%d\n",smallest);
    }
    return 0;
}