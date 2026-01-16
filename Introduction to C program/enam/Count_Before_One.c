#include<stdio.h>

int count_before_one(int arr[], int siz) {
    int elem = 0;
    for (int i=0; i<siz; i++) {
        if (arr[i] == 1) {
            return i;
        }
    }
    return siz;
}

int main() {

    int N;
    scanf("%d",&N);
    int A[N];
    for (int i=0; i<N; i++) {
        scanf("%d",&A[i]);
    }
    int count = count_before_one(A,N);
    printf("%d",count);
    return 0;
}