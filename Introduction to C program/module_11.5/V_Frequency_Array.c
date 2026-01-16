#include<stdio.h>

int main() {

    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }

    int fre[m];
    for (int i=0; i<=m; i++) {
        fre[i] = 0;
    }
    
    for (int i=0; i<n; i++) {
        fre[arr[i]]++;
    }
    for (int i=1; i<=m; i++) {  
        printf("%d\n",fre[i]);
    }
    return 0;
}