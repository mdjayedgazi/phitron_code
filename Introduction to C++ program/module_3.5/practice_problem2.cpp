#include <bits/stdc++.h>
using namespace std;

class Cricketer {
    public:
    string country;
    int jersey_no;
};

Cricketer* fun() {
    Cricketer* dhoni = new Cricketer();
    dhoni->country = "Indea";
    dhoni->jersey_no = 07;
    return dhoni;
} 
int main() {

    Cricketer* dhoni = fun();
    Cricketer kohli;
    kohli.country = dhoni->country;
    kohli.jersey_no = dhoni->jersey_no;
    delete dhoni;
    cout << "country : " << kohli.country << endl << "Jersey Number : " << kohli.jersey_no;
    return 0;
}