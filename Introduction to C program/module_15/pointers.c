#include<stdio.h>

int main() {

    int x = 10; 
    int* ptr = &x;
    printf("%p\n",ptr);
    printf("%p\n",&ptr);
    printf("%d",*ptr);
    return 0;
}