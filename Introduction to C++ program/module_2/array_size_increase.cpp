#include <bits/stdc++.h>
using namespace std;

int main() {

    int* ar = new int[3];
    for (int i=0; i<3; i++) {
        cin >> ar[i];
    }
    int* arr = new int[5];
    for (int i=0; i<3;i++) {
        arr[i] = ar[i];
    }
    arr[3] = 40;
    arr[4] = 50;
    delete[] ar;
    for (int i=0; i<5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}