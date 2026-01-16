#include<stdio.h>

void print(int n, int a) {
    if (n == 0) return;

    printf("%d",n);
    if(n>1) {
        printf(" ");
    }
    print(n-1,a);
}

int main() {

    int n;
    scanf("%d",&n);
    print(n,1);
    return 0;
}