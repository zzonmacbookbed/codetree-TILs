#include <iostream>
using namespace std;
int main() {
    int a;
    while (true) {
        cin >> a;
        if(a==1){
            cout << "John" << endl;
        }
        if(a==2) {
            cout << "Tom" << endl;
        }
        if(a==3) {
            cout << "Paul" << endl;
        }
        if(a==4) {
            cout << "Sam" << endl;
        }
        else {
            cout << "Vacancy" ;
            break;
        }
    }
    return 0;
}