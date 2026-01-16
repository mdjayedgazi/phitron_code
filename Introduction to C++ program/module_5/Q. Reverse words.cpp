// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     string str , rw;
//     getline(cin, str);
//     stringstream s(str);
//     s >> rw;
//     reverse(rw.begin(), rw.end());
//     cout << rw;
//     while (s >> rw) {
//         reverse(rw.begin(), rw.end());
//         cout <<" " << rw;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    string str, word;
    getline(cin, str);
    stringstream ss(str);
    bool first = true;
    while (ss >> word) {
        if (!first) cout << " ";
        reverse(word.begin(), word.end());
        cout << word;
        first = false;
    }
    return 0;
}