#include <iostream>
using namespace std;
int main() {
    int a,d;
    cin >> a >> d;
    if (a == 0) {
        if (d >= 19) {
            cout << "MAN";
        }
        else {
            cout << "BOY";
        }
    }
    else {
        if (d >= 19) {
            cout << "WOMAN";
        }
        else {
            cout << "GIRL";
        }
    }
}