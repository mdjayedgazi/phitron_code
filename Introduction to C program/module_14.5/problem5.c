#include<stdio.h>


char capital_to_small(char ch) {
    char a = ch+32;
    return a;
} 

int main() {

    char ch;
    scanf("%c",&ch);
    printf("%c",capital_to_small(ch));
    return 0;
}