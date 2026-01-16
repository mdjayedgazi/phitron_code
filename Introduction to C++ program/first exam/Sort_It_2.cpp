#include <bits/stdc++.h>
using namespace std;


int* sort_it(int arr[], int n) {
    int* new_arr = new int[n];
    for (int i=0; i<n; i++) {
        new_arr[i] = arr[i];
    }
    sort(new_arr, new_arr+n,greater<int>());
    return new_arr;
}

int main() {

    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int* ar = sort_it(arr,n);
    for (int i=0; i<n; i++) {
        cout << ar[i] << " ";
    }
    return 0;
}