#include<stdio.h>
#include<stdbool.h>
int main() {

    int n,x;
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    bool fl = false;
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (x == (arr[i]+arr[j])) {
                printf("Yes");
                fl = true;
            }
        }
    }
    if (fl == false) {
        printf("No");
    }
    return 0;
}