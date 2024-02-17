#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;
    int vol = 1;
    for(int i = 1; i <= b; i++) {
        vol *= a;
    }
    cout << vol;
}