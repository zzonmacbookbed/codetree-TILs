#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;
    int vol = 1;
    for(int i = a; i <= b; i++) {
        if(i%a == 0) {
            vol *= i;
        }
    }
    cout << vol;
    return 0;
}