#include<stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    char arr[n];
    scanf("%s",arr);
    
    int sum = 0;
    for (int i=0; i<n; i++) {
        if (arr[i]>= '0' && arr[i] <='9') {
            sum += arr[i] - '0';
        }
    }
    printf("%d",sum);
    return 0;
}