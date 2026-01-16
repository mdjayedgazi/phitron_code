#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    int roll;
    int age;
    float gpa;

    Student(int roll, int age, float gpa ) {
        this->roll = roll;
        this->age = age;
        this->gpa = gpa;
    }
};

Student* fun() {
    Student* nahin = new Student(30,20,4.6);
    return nahin;
}

int main() {
    Student* Nahin = fun();
    cout << Nahin->roll << " " << Nahin->age << " " << Nahin->gpa << endl;
    return 0;
}