#include<stdio.h>
#include<stdbool.h>
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
    int valuP = 0;
    int valuS = 0;
    bool is_primary = true;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i == j) {
                valuP += arr[i][j];
            } 
            if (i+j == n-1) {
                valuS += arr[i][j];
            }

        }
    }
    
    long long int sum = abs(valuP - valuS);
    printf("%lld",sum);
    return 0;
}