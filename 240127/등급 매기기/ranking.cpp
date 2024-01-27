#include <iostream>

int main() {
    int a;
    cin >> a;
    a >= 90 ? cout << "A" : a >= 80 ? cout << "B" : a >= 70 ? cout << "C" : a >= 60 ? cout << "D" : cout << "E";
}