#include <iostream>
using namespace std;
int main() {
    int a;
    int x = 0; 
    cin >> a;
    for(int i = 1; i <= a; i++){
        if(i % 4 == 0 || i % 400 == 0) {
            if (i % 100 != 0) {
                x += 1;
            }
        }
    }
    cout << x;
    return 0;
}