#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin >> a;
    for(int i = 0; i < a; i ++) {
        cin >> b;
        if(b%2 == 1 && b%3==0) {
            cout << b << endl;
        }
    }
}