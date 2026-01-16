#include<stdio.h>
#include<stdbool.h>
int main() {

    int n;
    scanf("%d",&n);
    int hh = 1;
    int dd = 3;
    int spes = n-1;

    for (int i=1; i<n+1; i++) {
        bool has = false;
        bool das = false;
        for (int j=0; j<spes; j++) {
            printf(" ");
        }
        if (i % 2 !=0) {
            for (int j=0; j<hh; j++) {
                printf("#");
                has = true;
            }
        }
        if (i % 2 == 0) {
            for (int j=0; j<dd; j++) {
                printf("-");
                das =true;
            }
        }
        printf("\n");
        if (has == true) {
            hh+=4;
        }
        if (das == true) {
            dd+=4;
        }
        spes--;
    }

    int ddhh = n*2-3;
    int sp = 1;
    
    if (n % 2 ==0) {
        for (int i=1; i<=n-1; i++) {
            for (int j=0; j<sp; j++) {
                printf(" ");
            }
            if (i % 2!= 0) {
                for (int j=0; j<ddhh; j++) {
                    printf("#");
                }
            }
            if (i % 2 == 0) {
                for (int j=0; j<ddhh; j++) {
                    printf("-");
                }
            }
            printf("\n");
            sp++;
            ddhh-=2;
        }
    }
    if (n % 2 != 0) {
        for (int i=1; i<=n-1; i++) {
            for (int j=0; j<sp; j++) {
                printf(" ");
            }
            if (i % 2== 0) {
                for (int j=0; j<ddhh; j++) {
                    printf("#");
                }
            }
            if (i % 2 != 0) {
                for (int j=0; j<ddhh; j++) {
                    printf("-");
                }
            }
            printf("\n");
            sp++;
            ddhh-=2;
        }
    }
    return 0;
}