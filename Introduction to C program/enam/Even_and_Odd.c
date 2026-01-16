#include<stdio.h>

void odd_even() {
    int n;
    int even = 0;
    int odd = 0;
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    for (int i=0; i<n; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        }
        if (arr[i] % 2 != 0) {
            odd++;
        }
    }
    printf("%d %d",even,odd);

}

int main() {

    odd_even();
    return 0;
}