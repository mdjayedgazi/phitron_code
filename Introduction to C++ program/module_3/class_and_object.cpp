#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int roll;
    float gpa;
    int mark;
};
int main() {

    Student a,b;
    getline(cin,a.name);
    cin >> a.roll >> a.gpa >> a.mark;
    cin.ignore();
    getline(cin,b.name);
    cin >> b.roll >> b.gpa >> b.mark;
    float  gpa = max(a.gpa,b.gpa);
    int big = max(a.mark,b.mark);
    cout << a.name << " " << a.roll << " " << a.gpa << " " << a.mark << endl;
    cout << b.name << " " << b.roll << " " << b.gpa << " " << b.mark << endl;
    cout << big << endl;
    cout << gpa << endl;
    return 0;
}