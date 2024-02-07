#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    if (a == 12 || a < 3) {
        cout << "Winter";
    }
    else if (a < 6) {
        cout << "Spring";
    }
    else if (a < 9) {
        cout << "Summer";
    }
    else {
        cout <<"Fall";
    }
}