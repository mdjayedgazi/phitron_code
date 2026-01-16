#include <bits/stdc++.h>
using namespace std;
class Student {
    public:
    string name;
    int roll;
    int marks;
};
bool comp (Student l , Student r) {
    return (l.marks > r.marks || (l.marks == r.marks) && (l.roll < r.roll));
}
int main() {

    int n;
    cin >> n;
    Student arr[n];
    for (int i=0; i<n; i++) {
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }
    sort(arr, arr+n, comp);
    for (int i=0; i<n; i++) {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    } 
    return 0;
}