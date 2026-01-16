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
                if (i == j || i+j == r-1) {
                    if (arr[i][j] == 1) {

                    } else if (arr[i][j] != 1) {
                        is_diagonal = false;
                        break;
                        
                    }
                } else {
                    if (arr[i][j] != 0) {
                        is_diagonal = false;
                        break;
                    }
                }
            }
            if (!is_diagonal) break;
        }
        if (is_diagonal) {
            printf("YES");
        } else {
            printf("NO");
        }
        
    } else {
        printf("NO");
    }
    return 0;
}