#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int roll;
    int cls;
    float gpa;

    Student(string name, int roll, int cls, float gpa) {
        this->name = name;
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main() {

    Student a("Jayed",23,10,3.89);
    Student b("Asiv",24,10,3.56);

    cout << a.name << " " << a.roll << " " << a.cls << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.cls << " " << b.gpa << endl;
    return 0;
}