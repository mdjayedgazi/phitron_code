#include <bits/stdc++.h>
using namespace std;

int* p  ;
void fun() {
    int*x = new int ;
    *x = 40;
    p = x;
    cout << "Fun ->" << *p << endl;
    return;
}

int main() {

    int* poin = new int;
    *poin = 20;
    cout << *poin << endl;
    fun();
    cout << "Main ->" << *p << endl;
    return 0;
}