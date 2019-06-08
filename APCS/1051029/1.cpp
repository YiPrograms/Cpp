#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int l[3];
    while (cin >> l[0] >> l[1] >> l[2]) {
        sort(l, l+3);
        cout << l[0] << " " << l[1] << " " << l[2] << "\n";
        if (l[0]+l[1]<=l[2]) {
            cout << "No";
        } else if (l[0]*l[0] + l[1]*l[1] == l[2]*l[2]) {
            cout << "Right";
        } else if (l[0]*l[0] + l[1]*l[1] > l[2]*l[2]) {
            cout << "Acute";
        } else {
            cout << "Obtuse";
        }
        cout << "\n";
    }
}
