#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int ster=1, spes=n-1;
    for (int i=1; i<=n; i++) {
        int num = 1;
        for (int j=1; j<=spes; j++) {
            printf(" ");
        }
        for (int j=1; j<=ster; j++) {
            printf("%d",num);
            num++;
        }
        printf("\n");
        ster++;
        spes--;
    }
}