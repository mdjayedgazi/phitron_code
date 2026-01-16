#include<stdio.h>
#include<limits.h>

int main() {

        int n,x = INT_MAX;
        int indx=0;
    scanf("%d",&n);
    int arr[n];
    for (int i=1; i<=n; i++) {
        scanf("%d",&arr[i]);
    }
    for (int i=1; i<=n; i++) {
        if (arr[i]< x) {
            x = arr[i];
            indx = i;
        }
    }
    printf("%d %d",x,indx);
    return 0;
}