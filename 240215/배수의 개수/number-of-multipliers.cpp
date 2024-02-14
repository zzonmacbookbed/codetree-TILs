#include <iostream>
using namespace std;
int main() {
    int a,x = 0,y = 0;
    for(int i = 0; i < 10; i ++){
        cin >> a;
        if(a%3==0) {
            x += 1;
        }
        if(a%5==0) {
            y += 1;
        }
    }
    cout << x << " " << y;
}