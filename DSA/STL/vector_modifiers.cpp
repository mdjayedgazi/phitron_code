#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> vc = {1,2,3,4,2,5,6,7,2};
    // replace(vc.begin(),vc.end(), 2,100);
    //for (int v : vc) cout << v << endl;
    // vector<int>::iterator it = find(vc.begin(), vc.end(),5);
    auto it = find(vc.begin(), vc.end(),5);
    (it == vc.end()) ? cout << "not found" : cout << "found";
    return 0;
}