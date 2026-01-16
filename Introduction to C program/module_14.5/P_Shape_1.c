#include<stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int ster = n;
    for (int i=0; i<n; i++) {
        for (int j=0; j<ster; j++) {
            printf("*");
        }
        printf("\n");
        ster--;
    }
    return 0;
}