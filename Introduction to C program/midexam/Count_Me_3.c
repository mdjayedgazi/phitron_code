#include<stdio.h>
#include<string.h>
int main() {

    int t;
    scanf("%d",&t);
    for (int i=0; i<t; i++) {
        char str[10000+10];
        scanf("%s",str);

        int size = strlen(str);
        int c=0,s=0,d=0;
        for (int j=0; j<size; j++) {
            if (str[j]>='A' && str[j]<='Z') {
                c++;
            } else if (str[j]>='a' && str[j]<='z') {
                s++;
            } else {
                d++;
            }
        }
        printf("%d %d %d\n",c,s,d);
    }
    return 0;
}