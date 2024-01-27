#include <iostream>
using namespace std;
int main() {
    string a;
    cin >> a;
    a == "S" ? cout << "Superior" : a == "A" ? cout << "Excellent" : a == "B" ? cout << "Good" : a == "C" ? cout << "Usually" : a == "D" ? cout << "Effort" : cout << "Failure";
    return 0;
}