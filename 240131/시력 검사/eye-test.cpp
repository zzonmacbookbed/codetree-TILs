#include <iostream>
using namespace std;
int main() {
    double a,b;
    cin >> a >> b;
    if (a >= 1.0 && b >= 1.00) {
        cout << "High";
    }
    else if (a >= 0.5 && b >= 0.5) {
        cout << "Middle";
    }
    else {
        cout << "Low";
    }
}