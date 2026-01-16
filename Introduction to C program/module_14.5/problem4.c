#include<stdio.h>


char small_to_capital(char ch) {
    char a = ch-32;
    return a;
} 

int main() {

    char ch;
    scanf("%c",&ch);
    printf("%c",small_to_capital(ch));
    return 0;
}