#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T, kase=0;
    cin >> T;
    while (T--) {
        cout << "Case " << ++kase << ": ";
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a+3);
        cout << a[1] << "\n";
    }
}
