#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    a == 1 ? cout << "John" : a == 2 ? cout << "Tom" : a == 3 ? cout << "Paul" : cout << "Vacancy";
}