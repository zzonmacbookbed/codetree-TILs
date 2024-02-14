#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    for(int i = 1; i <= a; i++) {
        if (i < 30 || i >= 40) {
            if(i%10==3 || i%10==6 || i%10==9 || i%3 == 0) {
            cout << 0 << " ";
            }
            else {
                cout << i << " ";
            }
        }
        if ((i >= 30 && i < 40) || (i >= 60 && i < 70) || (i >= 90 && i < 100)) {
            if(i%10==3 || i%10==6 || i%10==9 || i%3 == 0) {
            cout << 0 << " ";
            }

        }
    }
}