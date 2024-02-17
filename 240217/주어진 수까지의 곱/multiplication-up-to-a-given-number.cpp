#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;
    int time = 1;
    for(int i = a; i <= b; i++) {
        time *= i;
    }
    cout << time;
}