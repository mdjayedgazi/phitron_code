#include<stdio.h>
#include<limits.h>

int main() {

    int n;
    scanf("%d",&n);
    int min = INT_MAX;
    int max = INT_MIN;
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    for (int i=0; i<n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        } if (arr[i] < min) {
            min = arr[i];
        }
    }

    int tpm = max;
    for (int i=0; i<n; i++) {
        if (arr[i] == max) {
            arr[i] = min;
        } else {
            if (arr[i] == min) {
            arr[i] = tpm;
        }
        }
    }
    for (int i=0; i<n; i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}