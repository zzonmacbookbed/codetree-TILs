#include <iostream>
using namespace std;
int main() {
    int a,x;
    int sum = 0;
    cin >> a;
    for(int i = 0; i < a; i++) {
        cin >> x;
        if(x % 2 != 0 && x % 3 == 0) {
            sum += x;
        }
    }
    cout << sum;
}