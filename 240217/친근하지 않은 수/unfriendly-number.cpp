#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    int cnt = 0;
    for(int i = 1; i <=a; i++) {
        if(i%2==0 || i%3==0 || i%5==0) {
            continue;
        }
        cnt += 1;
    }
    cout << cnt;
}