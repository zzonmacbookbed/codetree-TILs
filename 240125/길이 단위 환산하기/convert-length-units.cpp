#include <iostream>
using namespace std;
int main() {
    double a;
    cout << fixed;
    cin >> a;
    cout.precision(1);
    cout << a*30.48;
}