#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;
    if (b > a) {
        cout << b - a;
    }
    else {
        cout << a - b;
    }
    return 0;
}