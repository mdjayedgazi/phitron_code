#include<stdio.h>

void print_num(int n, int a) {
    if (a == n+1) {
        return;
    } 
    printf("%d\n",a);
    print_num(n,a+1);
}

int main() {

    int n , i= 1;
    scanf("%d",&n);
    print_num(n,i);
    return 0;
}