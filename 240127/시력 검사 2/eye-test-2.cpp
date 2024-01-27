#include <iostream>
using namespace std;
int main() {
    double a;
    cin >> a;
    a >= 1.0 ? cout << "High" : a >=0.5 ? cout << "Middle" : cout << "Low";
    return 0;
}