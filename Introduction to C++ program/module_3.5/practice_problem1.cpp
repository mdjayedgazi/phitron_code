#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;

    Student (string name, int roll, char section, int math_marks, int cls) {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};


int main() {
    
    Student s1 ("Imran", 10,'B',50, 5);
    Student s2 ("Mahin", 1, 'B', 80, 5);
    Student s3 ("Jayed", 2, 'B', 80, 5);

    Student best = s1;
    if (s2.math_marks > best.math_marks || (s2.math_marks == best.math_marks && s2.roll < best.roll)) {
        best = s2;
    }
    if (s3.math_marks > best.math_marks || (s3.math_marks == best.math_marks && s3.roll < best.roll)) {
        best = s3;
    }
    cout << best.name;
    return 0;
}