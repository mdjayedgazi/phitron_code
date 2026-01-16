#include<stdio.h>
#include<string.h>
int main() {

    int n;
    scanf("%d",&n);
    char arr[1000+10];
    for (int i=0; i<n; i++) {
        scanf("%s",&arr);
        
        int size = strlen(arr);
        if (size > 10) {
            size-=2;
            printf("%c%d%c\n",arr[0],size,arr[size+1]);
            
        } else {
            printf("%s\n",arr);
        }
        
    }
    return 0;
}