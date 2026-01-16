#include<stdio.h>
#include<string.h>
int main() {

    char s1[1000+1];
    scanf("%s",s1);
    char s2[1000+1];
    scanf("%s",s2);
    int a,b;
    scanf("%d %d",&a,&b);
    int len = strlen(s2);
    if (b>= len) b=len-1;
    
    printf("%s",s1);
    for (int i=a;i<=b; i++) {
        char ch = s2[i];
        printf("%c",ch);
    }
    return 0;
}