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
    bool is_diagonal = true;
    if (r == c) {
        for (int i=0; i<r; i++) {
            for (int j=0; j<c; j++) {
                if (i == j) {
                    is_diagonal = true;
                } else {
                    if (arr[i][j] != 0) {
                        printf("This is not a prymary Diagonal matrix");
                        is_diagonal = false;
                        break;
                    }
                }
            }
            if (!is_diagonal) {
                break;
            }
        }
        if (is_diagonal) {
            printf("This is a prymary Diagonal matrix");
        }
    } else {
        printf("This is not a square matrix");
    }
    return 0;
}