#include<stdio.h>
#include<string.h>
int main() {

    char a[101], b[101];
    scanf("%s %s",&a,&b);
    int val = strcmp(a,b);
    printf("%d\n",val);
    if(val<0) {
        printf("A is smaller");
    } else if (val == 0) {
        printf("Equal");
    } else if (val>0) {
        printf("B is smaller");
    }


    // int i=0;
    
    // while (true) {
    //     if (a[i] == '\0' && b[i] == '\0') {
    //         printf("Equal");
    //         break;
    //     } else if (a[i] =='\0') {
    //         printf("a is smaller");
    //         break;
    //     } else if (b[i] == '\0') {
    //         printf("b is smaller");
    //         break;
    //     } 
    //     else if (a[i] < b[i]) {
    //         printf("a is smaller");
    //         break;
    //     } else if (a[i] > b[i]) {
    //         printf("b is smaller");
    //         break;
    //     } else if (a[i] == b[i]) {
    //         i++;
    //     }

    // };
    return 0;
}