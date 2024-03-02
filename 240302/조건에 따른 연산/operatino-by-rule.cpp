#include <iostream>
using namespace std;
int main() {
    int n, cnt = 0;
    cin >> n;
    while (true) {
        if (n >= 1000) {
            cout << cnt;
            break;
        }
        if(n%2==0) {
            n *= 3;
            n += 1;
            cnt += 1;
        }
        else {
            n *= 2;
            n += 2;
            cnt += 1;
        }

    }
    return 0;
}