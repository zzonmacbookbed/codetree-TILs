#include <iostream>
using namespace std;
int main() {
    string a,c,e;
    int b,d,f;
    int cnt = 0;
    int trash = 0;
    cin >> a >> b >> c >> d >> e >> f ;
    if (b >= 37) {
        if (a == "Y") {
            cnt += 1;
        }
    }
    if (d >= 37) {
        if (c == "Y") {
            cnt += 1;
        }
    }
    if (f >= 37) {
        if (e == "Y") {
            cnt += 1;
        }
    }
    if (cnt >= 2) {
        cout << "E";

    }
    else {
        cout << "N";
    }

}