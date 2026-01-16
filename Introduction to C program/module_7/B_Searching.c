#include<stdio.h>

int main() {

    int n , x;
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    int a = -1;
    for (int i=0; i<n; i++) {
        if (x == arr[i]) {
            a++;
            printf("%d",i);
            break;
        }
    }
    if (a == -1) {
        printf("%d",a);
    }
    return 0;
}