#include<stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int spes = n-1,ster =1;
    for (int i=1; i<=n; i++) {
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
    return 0;
}


// int main() {
//     int n;
//     scanf("%d",&n);
//     int spes=0;
//     for (int i=n; i>=1; i--) {
//         for (int j=1; j<=spes; j++) {
//             printf(" ");
//         }
//         for (int j=1; j<=(2*i-1);j++ ) {
//             printf("*");
//         }
//         printf("\n");
//         spes++;
//     }
// }