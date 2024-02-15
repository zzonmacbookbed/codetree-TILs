#include <iostream>
using namespace std;
int main() {
    int a;
    int x = 0, y = 0, z = 0;
    cin >> a;
    for(int i = 1; i <= a; i++) {
        if(i%2 == 0 || i%3 == 0) {
            if(i%12 == 0) {
                z += 1;
            }
            else if(i%3 == 0) {
                y += 1;
            }
            else {
                x += 1;
            }
        }
    }
    cout << x << " " << y << " " << z;
    return 0;
}