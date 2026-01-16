#include<stdio.h>
#include<string.h>
int main() {
    char str [1000000+20];
    fgets (str,1000000+20, stdin);

    for (int i=0; str[i] != '\\'; i++ ) {
        printf("%c",str[i]);
    }
    return 0;
}
// int main() {

//     char str [1000000+30];
//     fgets(str,1000000+30,stdin);

//     int size = strlen(str);
//     for (int i=0; i<size; i++) {
//         if (str[i] == '\\') {
//             str[i] = '\0';
//             break;
//         }
//     }
//     printf("%s",str);
//     return 0;
// }
