#include <iostream>
using namespace std;
int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    if (a > c || c > a) {
        if (a >= c) {
            cout << "A";
        }
        else {
            cout << "B";
        }
    }
    else if (a == c) {
        if (b > d) {
            cout << "A";
        }
        else {
            cout << "B";
        }
    }
}