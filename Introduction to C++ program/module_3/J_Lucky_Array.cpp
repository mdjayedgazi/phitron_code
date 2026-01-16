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
    for (int i = 0; i < n; i++)
    {
        smol = min(smol, arr[i]);
    }
    // count frequency in this array
    int fre = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == smol)
        {
            fre++;
        }
    }
    (fre % 2 != 0) ? cout << "Lucjy" : cout << "Unlucjy";
    return 0;
}