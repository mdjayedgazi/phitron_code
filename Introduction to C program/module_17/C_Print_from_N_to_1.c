#include<stdio.h>

void print_num(int n) {

    if (n == 0) return;
    printf("%d",n);
    if (n != 1) printf(" ");
    print_num(n-1);
}

int main() {

    int n;
    scanf("%d",&n);
    print_num(n);
    return 0;
}