#include<stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int ster = n*2-1;
    int spes = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<spes; j++) {
            printf(" ");
        }
        for (int j=0; j<ster; j++) {
            printf("*");
        }
        printf("\n");
        spes++;
        ster-=2;
    }
    return 0;
}