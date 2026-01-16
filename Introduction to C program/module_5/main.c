#include<stdio.h>

int main() {

    int X,x;
    scanf("%d",&X);
    x = X / 1000;
    if (x % 2 == 0) {
        printf("EVEN");
    } else {
        printf("ODD");
    }
    return 0;
}