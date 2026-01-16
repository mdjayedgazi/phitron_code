#include<stdio.h>
#include<string.h>
int main() {

    char str[100000+10];
    scanf("%s",&str);
    int fre [26] = {0};
    int size = strlen(str);
    for (int i=0; i<size; i++) {
        char ch = str[i];
        fre[ch-'a']++;
    }
    for (int i=0; i<26; i++) {
        if (fre [i] >0) {
            printf("%c : %d\n",i+'a',fre[i]);
        }
    }
    return 0;
}