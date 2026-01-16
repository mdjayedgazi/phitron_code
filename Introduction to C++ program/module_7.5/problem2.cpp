#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int roll;
    int marks;
};
int main() {

    int n;
    cin >> n;
    int i=0;
    int j = n-1;
    Student arr[n];
    for (int i=0; i<n; i++) {
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }
    while (i < j) {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for (int i=0; i<n; i++) {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    }

    return 0;
}