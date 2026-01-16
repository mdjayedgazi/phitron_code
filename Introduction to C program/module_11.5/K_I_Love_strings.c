#include<stdio.h>
#include<string.h>
int main() {
    
    int n;
    scanf("%d",&n);
    char s[50+10],t[50+10];
    for (int i=0; i<n; i++) {
        scanf("%s %s",&s,&t);
        int size_s = strlen(s);
        int size_t = strlen(t);
        int size = size_s + size_t+1;
        char valu[size+1];
        int k = 0;
        for (int j=0; j<size; j++) {
            if (j<size_s) {
                valu[k++] = s[j];
            }
            if (j<size_t) {
                valu[k++] = t[j];
            }
            
        }
        valu[k] = '\0';
        printf("%s\n",valu);
    }
    return 0;
}