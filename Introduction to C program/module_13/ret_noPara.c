#include<stdio.h>

int sumation() {
    int a,b;
    scanf("%d %d",&a,&b);
    int sum = a+b;
    return sum;
}

int main() {

    int ans = sumation();
    printf("%d",ans);
    return 0;
}