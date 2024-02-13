#include <iostream>
using namespace std;
int main() {
    int a,b,i;
    cin >> a >> b;
    i = a + b;
    for(i; i<= a + b  + (a * b); i += b) {
        cout << i  << "\n";
    }
}