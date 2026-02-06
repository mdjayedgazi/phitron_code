#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n,k,p;
        cin >> n >> k >> p;
        int arr[n];
        for (int i=0; i<n; i++) {
            cin >> arr[i];
        }
        int ved = k ,varun = p;
        sort(arr,arr+n);
        ved += arr[n-1];
        for (int i=0; i<n-1; i++) {
            varun += arr[i];
        }
        
        if (ved > varun) cout << "Ved" << endl;
        else if (ved < varun) cout << "Varun" << endl;
        else cout << "Equal" << endl;
    }
    return 0;
}