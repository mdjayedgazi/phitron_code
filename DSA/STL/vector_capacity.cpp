#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> vc;
    vc.push_back(10);
    vc.push_back(20);
    vc.push_back(30);
    vc.resize(10,5);
    cout << vc.size() << endl;
    for (auto v : vc) cout << v << endl;
    cout << vc.capacity() << endl;

    return 0;
}