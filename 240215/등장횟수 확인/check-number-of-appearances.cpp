#include <iostream>
using namespace std;
int main() {
    int a,x = 0;

    for(int i = 0; i < 5; i++) {
        cin >> a;
        if(a%2==0) {
            x += 1;
        }
    }
    cout << x;
    return 0;
}