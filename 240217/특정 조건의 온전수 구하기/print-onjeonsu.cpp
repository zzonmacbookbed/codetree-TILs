#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    for(int i = 1; i <= a; i++) {
        if(i%2!=0 && i%5!=0) {
            if(i%3 == 0 && i%9!=0) {
                continue;
            }
            cout << i << " " ;
        }
    }
    return 0;
}