#include<stdio.h>

int summation(int a, int b) {
    int sum = a+b;
    return sum;
}

int main() {

    int x,y;
    scanf("%d %d",&x,&y);
    int ans = summation(x,y);
    printf("%d",ans);
    return 0;
}