#include <bits/stdc++.h>
using namespace std;

int main() {

    int a,b,c;
    cin >> a >> b >> c;
  
    int smoll = min(a,min(b,c));
    
    int big = max(a,max(b,c));
    cout << smoll << " " << big;
    return 0;
}