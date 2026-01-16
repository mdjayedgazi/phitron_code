#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> vc = {10,20,30,40};
    list<int> ls (vc.begin(),vc.end());
    list<int> l (10,5);
    l.clear();
    for (int val : l) cout << val << " ";
    cout << endl;
    return 0;
}