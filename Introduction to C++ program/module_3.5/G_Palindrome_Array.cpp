#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int is_palindrome = true;
    int k = 0;
    int j = n-1;
    for (int i=0; i<n; i++) {
        if (arr[i] != arr[j]) {
            is_palindrome = false;
            break;
        }
        k++;
        j--;
    }
    (is_palindrome) ? cout << "YES" : cout << "NO";
    return 0;
}