#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int smol = INT_MAX;
    int big = INT_MIN;

    for (int i = 0; i < n; i++) {
        smol = min(arr[i], smol);
        big = max(arr[i], big);
    }
    for (int i=0; i<n; i++) {
        if (arr[i] == smol) {
            arr[i] = big;
        } else if (arr[i] == big) {
            arr[i] = smol;
        }
    }
    
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}