#include <iostream>

using namespace std;

int main() {
    int A,B;
    while (cin >> A >> B) {
        if (A==B) {
            if (A==0) break;
            cout << 0;
        } else if (A>B) {
            cout << "A " << A-B;
        } else {
            cout << "B " << B-A;
        }
        cout << endl;
    }
}
