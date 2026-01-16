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
};

bool comp(Student left , Student right) {
    return (left.eng > right.eng || (left.eng == right.eng && (left.math > right.math) || left.eng == right.eng && left.math == right.math && left.id < right.id));
}
int main() {

    int n;
    cin >> n;
    Student arr[n];
    for (int i=0; i<n; i++) {
        cin >> arr[i].name >> arr[i].cls >> arr[i].s >> arr[i].id >> arr[i].math >> arr[i].eng;
    }
    sort(arr,arr+n,comp);
    for (int i=0; i<n; i++) {
        cout << arr[i].name << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << " " << arr[i].math << " " << arr[i].eng << endl;
    }
    return 0;
}