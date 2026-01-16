#include <iostream>

using namespace std;

int main() {

    int x;
    cin >> x;
    cin.ignore();
//    char str[30];
    string str;
    getline(cin, str);
    cout << x << endl << str << endl;
    return 0;
}