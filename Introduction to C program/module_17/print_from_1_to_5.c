#include<stdio.h>

void count(int i) {
    
    if (i == 6) {
        return;
    }
    printf("%d\n",i);
    count(i+1);
}

int main() {

    int i=1;
    count(i);
    return 0;
}