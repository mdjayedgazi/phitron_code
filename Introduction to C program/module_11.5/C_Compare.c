#include<stdio.h>
#include<string.h>
int main() {

    char x [20+10];
    char y [20+10];
    scanf("%s\n",&x);
    scanf("%s\n",&y);
    int val = strcmp(x,y);
    if (val < 0) {
        printf("%s",x);
    } else if (val == 0) {
        printf("%s",x);
    } else if (val > 0) {
        printf("%s",y);
    }
    return 0;
}