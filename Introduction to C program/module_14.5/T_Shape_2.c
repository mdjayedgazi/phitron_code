#include<stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int ster=1;
    int spes=n-1;
    for (int i=0; i<n; i++) {
        for (int j=0; j<spes; j++) {
            printf(" ");
        }
        for (int j=0; j<ster; j++) {
            printf("*");
        }
        printf("\n");
        ster+=2;
        spes--;
    }
    return 0;
}