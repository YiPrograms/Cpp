#include <iostream>
using namespace std;

int main() {
    int a,b;
    while (cin >> a >> b) {
        if (a<b) cout << a << "<" << b;
        else if (a>b) cout << a << ">" << b;
        else cout << a << "=" << b;
        cout << endl;
    }
}
