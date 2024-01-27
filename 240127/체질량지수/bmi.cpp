#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;
    double square = b * 10000 / (a*a) ;
    if (square >= 25) {
        cout << square << endl << "Obesity";
    }
    else {
        cout << square;
    }
}