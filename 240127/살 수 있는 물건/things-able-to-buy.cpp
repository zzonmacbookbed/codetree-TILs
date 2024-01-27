#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    a >= 3000 ? cout << "book" : a >= 1000 ? cout << "mask" : cout << "no";
}