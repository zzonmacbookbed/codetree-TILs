#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int prog = 1;
    for(int i = 1; i <= n; i++) {
        prog *= i;
        if(prog >= n) {
            cout << i;
            break;
        }
    }
    return 0;
}