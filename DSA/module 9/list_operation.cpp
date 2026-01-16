#include <bits/stdc++.h>
using namespace std;

int main() {

    list<int> l = {10,20,10,30,30,40,20,50,40};
    l.sort();
    l.unique();
    l.reverse();
    for (int val : l) cout << val << " ";
    return 0;
}