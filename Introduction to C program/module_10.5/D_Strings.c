#include<stdio.h>
#include<string.h>
int main() {

    char a[100];
    char b[100];
    scanf("%s",&a);
    scanf("%s",&b);

    int size_a = strlen(a);
    int size_b = strlen(b);
    printf("%d %d\n",size_a, size_b);
    printf("%s%s\n",a,b);
    char tpm = a[0];
    a[0] = b[0];
    b[0] = tpm;
    printf("%s %s",a,b);

    return 0;
}