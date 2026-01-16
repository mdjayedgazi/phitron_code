#include <stdio.h>

long long int sum = 0;
void summation(int arr[], int n, int a)
{
    if (n == a)
    return;
    sum += arr[a];
    if (a == n-1) {
        printf("%lld ", sum);
    }
    summation(arr, n, a + 1);
}

int main()
{

    int n, i = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    summation(arr, n, i);
    return 0;
}