#include <iostream>

using namespace std;

int main() {
    int A,B;
    while (cin >> A >> B) {
        if (cin.fail()) break;
        if (A==B) {
            cout << 0;
        } else if (A>B) {
            cout << "A " << A-B;
        } else {
            cout << "B " << B-A;
        }
        cout << endl;
    }
}
