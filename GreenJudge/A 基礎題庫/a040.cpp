#include <iostream>

using namespace std;

int main() {
    int A,B,n,k=1;
    cin >> n;
    while (n--) {
        cin >> A >> B;
        if (cin.fail()) break;
        cout << "Case " << k << ": ";
        if (A==B) {
            cout << 0;
        } else if (A>B) {
            cout << "A " << A-B;
        } else {
            cout << "B " << B-A;
        }
        cout << endl;
        k++;
    }
}
