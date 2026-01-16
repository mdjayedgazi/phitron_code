#include<stdio.h>

int main() {

    int t;
    scanf("%d",&t);

    for (int i=0; i<t; i++) {
        long long int m,a,b,c;
        scanf("%lld %lld %lld %lld",&m, &a, &b, &c);

        long long int mul = a*b*c;

        if (mul == 0) {
            if (m == 0) {
                printf("0\n");
            } else {
                printf("-1\n");
            }
        } else {
            if (m % mul == 0) {
                long long int dv = m/mul;
                printf("%lld\n",dv);
            } else {
                printf("-1\n");
            }
        }
    }
    return 0;
}