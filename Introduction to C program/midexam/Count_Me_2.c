#include<stdio.h>
#include<string.h>
int main() {

    char str[100000+10];
    scanf("%s",str);
    int size = strlen(str);
    int count =0;
    for (int i=0; i<size; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u') {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}