#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int roll;
    int english;
    int math;

    // constructor
    Student(string name, int roll, int english, int math) {
        this->name = name;
        this->roll = roll;
        this->english = english;
        this->math = math;
    }

    // methods
    void total() {
        cout << "Total marks of " << name << " = " << english+math << endl;
    }
};
int main() {

    Student mj ("Jayed",10,70,80);
    mj.total();
    Student nah ("Nahin",5,90,95);
    nah.total();
    return 0;
}