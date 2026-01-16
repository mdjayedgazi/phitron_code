#include<stdio.h>
#include<stdlib.h>
int main() {

    int n;
    scanf("%d",&n);
    int arr[n][n];
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            scanf("%d",&arr[i][j]);
        }
    }

    int valp = 0;
    int vals = 0;

    for(int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i==j) {
                valp += arr[i][j];
            } 
            if (i+j == n-1) {
                vals += arr[i][j];
            }
            
        }
    }
    long long int sum = abs(valp - vals);
    printf("%lld",sum);
    return 0;
}