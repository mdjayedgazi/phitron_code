#include<stdio.h>
#include<stdbool.h>
int main() {

    int r,c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int valP = arr[0][0];
    int valC = arr[0][c-1];
    bool is_scalar = true;

    if (r == c) {
        for (int i=0; i<r; i++) {
            for (int j=0; j<c; j++) {
                if (i == j) {
                    if (arr[i][j] != valP) {
                        is_scalar = false;

                    } else {
                        if(i+j == r-1) {
                            if (arr[i][j] != valC) {
                                is_scalar = false;
                            } // pass
                        }
                    }       
                    
                }else  {
                    if (arr[i][j] != 0) {
                        printf("This is not a prymary dynamic matrix\n");
                        is_scalar = false;
                        break;
                    }
                }
            }
            if (!is_scalar) break;
        }
        if (is_scalar) {
            printf("This is a scalar matrix\n");
        } else {
            printf("This is not a scalar matrix\n");
        }

    } else {
        printf("This is not a square matrix\n");
    }
    return 0;
}