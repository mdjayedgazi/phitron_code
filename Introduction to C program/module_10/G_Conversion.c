#include<stdio.h>
#include<string.h>
int main() {

    char s[1000000+10];
    scanf("%s",s);
    int size = strlen(s);
    for (int i=0; i<size; i++) {
        if (s[i] == ',') {
            s[i] = ' ';
        }
        if (s[i]>= 'A' && s[i]<='Z' ) {
            s[i] += 32;
        } else if (s[i]>='a' && s[i]<='z') {
            s[i] -=32;
        }
    }
    printf("%s",s);
    return 0;
}