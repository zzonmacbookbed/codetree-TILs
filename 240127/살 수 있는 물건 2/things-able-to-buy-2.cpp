#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    a >= 3000 ? cout << "book" : a >= 1000 ? cout << "mask" : a >= 500 ? cout << "pen" : cout << "no";
    return 0;
}