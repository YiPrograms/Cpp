#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int A,B;
        cin >> A >> B;
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
