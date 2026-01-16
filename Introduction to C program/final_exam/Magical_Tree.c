#include<stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int line = (n+10)/2+1;
    int ster = 1;
    int spes = line-1;

    for (int i=1; i<=line; i++) {
        for (int k=1; k<=spes; k++) {
            printf(" ");
        }
        for (int j=1; j<=ster; j++) {
            printf("*");
        }
        printf("\n");
        ster+=2;
        spes--;
    }
    int sp = 5;
    int st = n;
    for (int i=0; i<5; i++) {
        for (int j=0; j<sp; j++) {
            printf(" ");
        }
        for (int j=0; j<st; j++) {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}