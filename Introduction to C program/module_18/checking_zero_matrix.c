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
    bool flag = true;
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            if (arr[i][j] != 0) {
               flag = false;
               break;
            }
        }
    }
    if (flag) {
        printf("This is a Zero Matrix");
    } else {
        printf("This is Not a Zero Matrix");
    }
    return 0;
}