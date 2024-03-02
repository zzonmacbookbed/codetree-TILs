#include <iostream>
using namespace std;
int main() {
    int a,cnt = 0;
    cin >> a;
    while(true) {
        if(a == 2) {
            cnt += 1;
            cout << cnt;
            break;
        }
        else {
            a /= 2;
            cnt += 1;
        }
    }
    return 0;
}