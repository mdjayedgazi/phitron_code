#include <bits/stdc++.h>
using namespace std;

void same (list<int>& l, list<int>& ls) {
    
    if (l.size() != ls.size()) {
        cout << "NO";
        return;
    }
    auto it1 = l.begin();
    auto it2 = ls.begin();

    while (it1 != l.end()) {
        if(*it1 != *it2) {
            cout << "NO";
            return;
        }
        it1++;
        it2++;
    }
    cout << "YES";
} 

int main() {

    list<int> l;
    list<int> ls;
    
    int val;
    while (cin >> val) {
        if (val == -1) break;
        l.push_back(val);
    }
    while (cin >> val) {
        if (val == -1) break;
        ls.push_back(val);
    }
    same(l,ls);
    return 0;
}