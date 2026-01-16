#include <bits/stdc++.h>
using namespace std;

int main() {
    char ch[100001];

    while (cin.getline(ch, 100001)) {

        int size = strlen(ch);

        int j = 0;
        for (int i=0; i<size; i++) {
            if (ch[i] != ' ') {
                ch[j] = ch[i];
                j++;
            }
        }
        ch[j] = '\0';

        sort(ch,ch+j);
        
        for (int i=0; i<j; i++) {
            cout << ch[i];
        }
        cout << endl;
    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s;

//     while (getline(cin, s)) {
//         s.erase(remove(s.begin(), s.end(), ' '), s.end());
//         sort(s.begin(), s.end());
//         cout << s << endl;
//     }
//     return 0;
// }
