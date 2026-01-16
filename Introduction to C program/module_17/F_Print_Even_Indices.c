#include<stdio.h>

void even_arr(int arr[], int n) {
    
    for (int i=n-1; i>=0; i--) {
        if (i % 2 == 0) {
            printf("%d ",arr[i]);
            if (i == 0) return;
        }
        if (i == -1 ) break;
    }
    even_arr(arr,n-1);
}

int main() {

    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    even_arr(arr,n);
    return 0;
}