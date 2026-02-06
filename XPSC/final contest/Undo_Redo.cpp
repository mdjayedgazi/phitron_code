#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    vector<string> s, undo;

    while (t--) {
        string st;
        cin >> st;

        if (st == "TYPE") {
            string x;
            cin >> x;
            s.push_back(x);
            undo.clear();  // new TYPE clears redo history
        }
        else if (st == "UNDO") {
            if (!s.empty()) {
                undo.push_back(s.back());
                s.pop_back();
            }
        }
        else if (st == "REDO") {
            if (!undo.empty()) {
                s.push_back(undo.back());
                undo.pop_back();
            }
        }
    }

    // Print final text
    for (auto c : s) cout << c;
    cout << endl;

    return 0;
}
