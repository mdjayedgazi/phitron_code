#include <bits/stdc++.h>
using namespace std;


int main() {
    int T;
    cin >> T;
    for (int i=0; i<T; i++) {

        string str , x;
        cin >> str >> x;
        int siz =  x.length();
        
        while (true) {
            int ind = str.find(x);
            
            if (ind != -1) {
                str.replace(ind, siz , "#");
            } else {
                break;
            }
        }
        cout << str << endl;
    }
    return 0;
}




// int main() {

//     int T;
//     cin >> T;
//     for (int _=0; _<T; _++) {
//         string s,x;
//         cin >> s >> x;
//         int xSiz = x.length();
//         for (int i=0; i<s.length(); i++) {
//             if (s.substr(i,xSiz) == x) {
//                 cout << "#";
//                 i+=xSiz-1;
//             } else {
//                 cout << s[i];    
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }