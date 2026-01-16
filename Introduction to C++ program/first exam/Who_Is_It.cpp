#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    int ID;
    string name;
    char section;
    int marks;
};

int main() {

    int t;
    cin >> t;
    for (int _=0; _<t; _++) {
        Student s1;
        cin >> s1.ID >> s1.name >> s1.section >> s1.marks;
        Student s2;
        cin >> s2.ID >> s2.name >> s2.section >> s2.marks;
        Student s3;
        cin >> s3.ID >> s3.name >> s3.section >> s3.marks;
       
        Student toper = s1;
        if (s2.marks > toper.marks || (s2.marks == toper.marks && s2.ID < toper.ID)) toper = s2;
        if (s3.marks > toper.marks || (s3.marks == toper.marks && s3.ID < toper.ID)) toper = s3;
    
        cout << toper.ID << " " << toper.name << " " << toper.section << " " << toper.marks << endl;
    }
    return 0;
}