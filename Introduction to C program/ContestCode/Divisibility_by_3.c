#include<stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    char arr[n];
    for (int i=0; i<n; i++) {
        scanf("%s",arr);
    }
    int sum =0;
    for (int i=0; i<n; i++) {
        sum += (arr[i] - '0');
    }
    if (sum % 3 ==0) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}