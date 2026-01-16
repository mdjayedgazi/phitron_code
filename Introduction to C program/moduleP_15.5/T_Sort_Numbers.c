#include<stdio.h>

void ascending(int arr[], int n) {
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (arr[i]> arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i=0; i<n; i++) {
        printf("%d\n",arr[i]);
    }
}

void sequence(int arr[], int n) {
    for (int i=0; i<n; i++) {
        printf("%d\n",arr[i]);
    }
}
int main() {

    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int org[] = {a,b,c};
    int arr[3] = {a,b,c};
    ascending(arr,3);
    printf("\n");
    sequence(org,3);
    return 0;
}