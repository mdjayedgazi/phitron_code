#include<stdio.h>

int main() {

    int n,odd = 0;
    int arr[n];
    scanf("%d",&n);
    if (n<=0) {
        printf("plesse increase your input number");
    } else {
        for (int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    for (int i=0; i<n; i++) {
        if (arr[i]%2!=0) {
            odd++;
        }
    }
    printf("%d",odd);
    }
    
    return 0;
}