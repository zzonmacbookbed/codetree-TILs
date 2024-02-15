#include <iostream>
using namespace std;
int main() {
    int a, sum = 0;
    for(int i = 0; i < 10; i++) {
        cin >> a;
        sum += a;
    }
    cout << fixed;
    cout << presicion(1);
    cout << sum << " " << (double)sum/10;
    return 0;
}