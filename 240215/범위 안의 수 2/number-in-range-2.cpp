#include <iostream>
using namespace std;
int main() {
    int a, sum = 0;
    int cnt = 0;
    for(int i = 0; i < 10; i++) {
        cin >> a;
        if(a >= 0 && a <= 200) {
            sum += a;
            cnt += 1;
        
        }

    }
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << (double)sum/cnt;
    return 0;
}