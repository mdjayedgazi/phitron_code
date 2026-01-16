#include<stdio.h>
#include<stdbool.h>
int main() {

    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    bool is_dinamic = true;
    if (r == c) {
        for (int i=0; i<r; i++) {
            for (int j=0; j<c; j++) {
                if (i + j == r-1) {
                    is_dinamic = true;
                } else {
                    if (arr[i][j] !=0) {
                        printf("This is not a secondary dynamic matrix");
                        is_dinamic = false;
                        break;
                    }
                }
            }
            if (!is_dinamic) break;
        }
        if (is_dinamic) {
            printf("This is a secondary dynamic matrix");
        }

    } else {
        printf("This is not a square matrix");
    }
    return 0;
}