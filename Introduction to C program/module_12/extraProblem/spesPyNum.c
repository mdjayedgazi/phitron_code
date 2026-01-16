#include<stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int num = 1;
    int spes = n-1;
    for (int i=0; i<n; i++) {
        int val = 1;
        for (int j=0; j<spes; j++) {
            printf(" ");
        }
        for (int j=0; j<num; j++) {
            printf("%d ",val);
            val++;
        }
        printf("\n");
        num++;
        spes--;
    }
    return 0;
}