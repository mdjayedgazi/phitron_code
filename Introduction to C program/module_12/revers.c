#include<stdio.h>

// int main() {

//     int n;
//     scanf("%d",&n);
//     for (int i=1; i<=n; i++) {
//         for (int j=n-i; j>=0; j--) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

int main() {
    int n;
    scanf("%d",&n);
    int ster=1, spes=n-1;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=spes; j++) {
            printf(" ");
        }
        for (int j=1; j<=ster; j++) {
            printf("*");
        }
        printf("\n");
        ster++;
        spes--;
    }
}