#include<stdio.h>
#include<stdlib.h>
int main() {

    int arr[5][5];
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int r , c;

    for(int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            if (arr[i][j] == 1) {
                r = i+1;
                c = j+1; 
            }
        }
    }
    int step = abs(3 -r) + abs(3 -c);
    printf("%d",step);
    return 0;
}