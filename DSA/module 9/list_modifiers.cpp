#include <bits/stdc++.h>
using namespace std;

int main() {

    list<int> l = {10,20,5,30,5,40,50,5};
    list<int>ls;
    vector<int> v = {10,20,30,5,20,5,50,5};

    ls = l;
    // ls.erase(remove(ls.begin(),ls.end(),5),ls.end());
    // ls.insert(next(ls.begin(),2),v.begin(),v.end());  // insert at any position
    ls.erase(next(ls.begin(),2),next(ls.begin(),5));
    // replace(ls.begin(),ls.end(),5,500);
    // auto it = find(ls.begin(),ls.end(),10);
    // if (it == ls.end()) {
    //     cout << "NO" << endl;
    // } else {
    //     cout << "Yes" << endl;
    // }
    for (int val : ls) cout << val << " ";
    return 0;
}