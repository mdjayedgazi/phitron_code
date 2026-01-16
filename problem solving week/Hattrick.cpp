#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while (T--) {
	    string s;
	    int ct = 0;
	    cin >> s;
	    for (char ch : s) {
	        if (ch == 'W') {
	            ct++;
	        }
	    }
	    (ct >= 3) ? cout << "YES" << endl : cout << "NO" << endl;
	}
    return 0;
}
