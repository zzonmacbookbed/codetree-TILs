#include <iostream>
using namespace std;
int main() {
    int a,cnt = 0;
    int sum = 0;
    while(true) {
        cin >> a;
        if(a>=30 || a<20) {
            cout << fixed;
            cout.precision(2);
            cout << (double)sum/cnt;
            break;
        }
        else {
            sum += a;
            cnt += 1;
        }

    }
    return 0;
}