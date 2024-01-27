#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    a < 0 ? cout << "ice" : a >= 100 ? cout << "vapor" : cout << "water";
}