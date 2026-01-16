#include<stdio.h>

void print(int n, int i) {
    if (i == n+1) {
        return;
    }
    printf("%d\n",i);
    print(n, i+1);
}

int main() {

    int n , i =1;
    scanf("%d",&n);
    print(n , i);
    return 0;
}