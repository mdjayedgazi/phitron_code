#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int cls;
    char s;
    int id;
    int math;
    int eng;
    int total;
};

bool com (Student l, Student r) {
    return (l.total > r.total || (l.total == r.total && l.id < r.id));
}
int main() {

    int n,total;
    cin >> n;
    Student arr[n];
    for (int i=0; i<n; i++) {
        cin >> arr[i].name >> arr[i].cls >> arr[i].s >> arr[i].id >> arr[i].math >> arr[i].eng;
    }
    for (int i=0; i<n; i++) {
        arr[i].total = arr[i].math + arr[i].eng;
    }
    sort(arr, arr+n, com);
    for (int i=0; i<n; i++) {
        cout << arr[i].name << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << " " << arr[i].math << " " << arr[i].eng << endl ;
    }
    return 0;
}