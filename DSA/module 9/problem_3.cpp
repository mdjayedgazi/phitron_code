#include <bits/stdc++.h>
using namespace std;

bool Palindrome(const list<int>& l) {
    if (l.empty()) return true;
    auto left = l.begin();
    auto right = prev(l.end());

    while (left != right && prev(left) != (right)) {
        if (*left != *right) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {

    list<int> l;
    int val;
    while (cin >> val && val != -1) l.push_back(val);

    (Palindrome(l)) ? cout << "YES" : cout << "NO";
    return 0;
}