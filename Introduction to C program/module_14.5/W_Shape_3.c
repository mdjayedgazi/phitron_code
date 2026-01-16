#include<stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int spes = n-1;
    int ster =1;
    for (int i=0; i<n; i++) {
        for (int j=0; j<spes; j++) {
            printf(" ");
        }
        for (int j=0; j<ster; j++) {
            printf("*");
        }
        printf("\n");
        spes--;
        ster+=2;
    }
    int sp = 0;
    int st = n*2-1;
    for(int i=0; i<n; i++) {
        for (int j=0; j<sp; j++) {
            printf(" ");
        }
        for (int j=0; j<st; j++) {
            printf("*");
        }
        printf("\n");
        sp++;
        st-=2;
    }
    return 0;
}