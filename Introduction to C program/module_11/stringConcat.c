#include<stdio.h>
#include<string.h>
int main() {

    char a[101], b[101];
    scanf("%s %s",&a, &b);
    strcat (a,b);
    // int size_a = strlen(a);
    // int size_b = strlen(b);
    // for (int i=0; i<=size_b; i++) {
    //     a[size_a+i] = b[i];
    // }
    printf("%s %s",a, b);
    return 0;
}