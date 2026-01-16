#include<stdio.h>
#include<string.h>
int main() {

    char s[1000+10];
    scanf("%s",&s);
    char t[1000+10];
    scanf("%s",&t);
    int size_S = strlen(s);
    int size_T =strlen(t);
    printf("%d %d\n",size_S,size_T);
    printf("%s %s",s,t);
    return 0;
}