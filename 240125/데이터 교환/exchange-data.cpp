#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    int temp,temp1; 
    a = 5;
    b = 6;
    c = 7;
    temp = c;
    temp1 = b; 
    b = a;
    c = temp1; // 6
    a = temp; // 7
    cout << a << endl << b << endl << c;

    return 0;
}