#include <iostream>
using namespace std;
int main() {
    int a,b,sum = 0;
    cin >> a;
    for(int i = 0; i < a; i++) {
        cin >> b;
        sum += b;
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << (double)sum/a;
    return 0;
}