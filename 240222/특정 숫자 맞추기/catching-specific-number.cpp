#include <iostream>
using namespace std;
int main() {
    int n;
    while (true) {
        cin >> n;
        if(n > 25) {
            cout << "Lower" << endl; 
        }
        else if(n == 25) {
            cout << "Good";
            break;
        }
        else {
            cout << "Higher" << endl;
        }
    }
    return 0;
}