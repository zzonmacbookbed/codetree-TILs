#include <iostream>
using namespace std;
int main() {
    int a,c = 0;
    for(int i = 0; i < 10; i++) {
        cin >> a;
        if(a%2!=0) {
            c += 1;
        }
    }
    cout << c;
}