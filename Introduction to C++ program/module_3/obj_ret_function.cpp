#include <bits/stdc++.h>
using namespace std;


class Student {
    public:
    int roll;
    int age;
    int cla;
    float gpa;
};
Student fun() {
    Student karim;
    cin >> karim.roll >> karim.age >> karim.cla >> karim.gpa;
    return karim;
}
int main() {

    Student Jayed, Asiv;
    cin >> Jayed.roll >> Jayed.age >> Jayed.cla >> Jayed.gpa;
    cin >> Asiv.roll >> Asiv.age >> Asiv.cla >> Asiv.gpa;

    cout << Jayed.roll << " " << Jayed.age << " " << Jayed.cla << " " << Jayed.gpa << endl;

    cout << Asiv.roll << " " << Asiv.age << " " << Asiv.cla << " " << Asiv.gpa << endl;

    Student karim = fun();

    cout << karim.roll << " " << karim.age << " " << karim.cla << " " << karim.gpa;
    return 0;
}