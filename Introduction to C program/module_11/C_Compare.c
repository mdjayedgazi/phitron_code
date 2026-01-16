#include<stdio.h>
#include<string.h>
int main() {

    char x[20+10], y[20+10];
    scanf("%s\n%s",&x,&y);
    int i=0;
    while (1) {
        if (x[i] =='\0' && y[i] == '\0') {
            printf("%s",x);
            break;
        } else if (x[i] == '\0') {
            printf("%s",x);
            break;
        } else if (y[i] == '\0') {
            printf("%s",y);
            break;
        }
        else if (x[i] < y[i]) {
            printf("%s",x);
            break;
        } else if (x[i] > y[i]) {
            printf("%s",y);
            break;
        } else if (x[i] == y[i]) {
            i++;
        }
    }
    return 0;
}