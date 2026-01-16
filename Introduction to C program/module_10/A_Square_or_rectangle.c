#include<stdio.h>
#include<string.h>
int main() {

    int t;
    scanf("%d",&t);
    for (int x=0; x<t; x++) {

        int w;
        scanf("%d",&w);
        int h;
        scanf("%d",&h);
        if (h == w) {
            printf("Square\n");
        } else {
            printf("Rectangle\n");
        }
    } 
    return 0;
}