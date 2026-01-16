#include <stdio.h>
#include <string.h>
int main()
{

    char arr[100000 + 10];
    fgets(arr, 100000 + 10, stdin);
    int size = strlen(arr);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == ',')
        {
            arr[i] = ' ';
        }
        else if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            arr[i] += 32;
        }
        else if (arr[i] >= 'a' && arr[i] <= 'z')
        {

            arr[i] -= 32;
        }
    }

    printf("%s", arr);
    return 0;
}