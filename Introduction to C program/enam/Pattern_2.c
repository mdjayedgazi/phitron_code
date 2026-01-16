#include<stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int spes = n-1;
    int num = 1; 

    for (int i=0; i<n; i++) {
        for (int j=0; j<spes; j++) {
            printf(" ");
        }
        for (int j=num; j>0; j--) {
            printf("%d",j);
        }
        printf("\n");
        spes--;
        num++;
    }
    return 0;
}