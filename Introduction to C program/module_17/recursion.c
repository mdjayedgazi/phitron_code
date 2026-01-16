#include<stdio.h>

void hello() {
    printf("Hello\n");
    hello();
}

int main() {

    printf("hi\n");
    hello();
    return 0;
}