#include<stdio.h>

int main() {

    int T;
    scanf("%d",&T);
    for (int i=0; i<T; i++) {
        int M1,M2,D;
        scanf("%d %d %d",&M1,&M2,&D);
        int valu = M1+M2;
        int days = (M1*D)/valu;
        int ans = D-days;
        printf("%d\n",ans);
    }
    return 0;
}