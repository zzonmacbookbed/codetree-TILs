#include <iostream>
using namespace std;
int main() {
    int a,b,i;
    cin >> a >> b;
    i = a;
    return 0;
    while(i >= b) {
        cout << i << " ";
        i -= 2;
    }
}