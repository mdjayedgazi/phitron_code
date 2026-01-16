#include<stdio.h>
#include<string.h>
int main() {

    char str[1000000+20];
    scanf("%s",str);
    int size = strlen(str);
    int sum = 0;
    for (int i=0; i<size; i++) {
        sum+=str[i]-'0';
    }
    printf("%d",sum);
    return 0;
}