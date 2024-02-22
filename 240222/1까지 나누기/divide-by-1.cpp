#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= 5000; i++) {
        n /= i;
        sum += 1;
        if(n <= 1) {
            cout << sum;
            break;
        }

    }
}