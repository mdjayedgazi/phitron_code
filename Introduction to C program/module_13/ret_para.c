#include<stdio.h>

int sumation(int x, int y) {
    int sum = x+y;
    return sum;
}
int main() {

    int a = 5;
    int b = 20;
    printf("%d",sumation(a,b));
    return 0;
}