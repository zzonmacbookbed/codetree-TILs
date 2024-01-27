#include <iostream>
using namespace std;
int main() {
    char a;
    a == "S" ? cout << "Superior" : a == "A" ? cout << "Excellent" : a == "B" ? cout << "Good" : a == "C" ? cout << "Usually" : a == "D" ? cout << "Effort" : cout << "Failure";
    return 0;
}