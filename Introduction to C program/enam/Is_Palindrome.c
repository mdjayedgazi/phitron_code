#include<stdio.h>
#include<string.h>

int is_palindrome(char s[]) {
    int len = strlen(s);
    int pali = 1;
    int i = 0;
    int j= len-1;
    while (i<j)
    {
        if (s[i] != s[j]) {
            pali = 0;
            break;
        }
        i++;
        j--;
    }
    return pali;
    
}

int main() {

    char str[1000];
    scanf("%s",str);
    int value = is_palindrome(str);
    if (value == 1) {
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }
    return 0;
}