#include <iostream>
using namespace std;

int main() {
    int N;
    while (cin >> N) {
        if (N%2) cout << "ODD"; else cout << "EVEN";
        cout << endl;
    }
}
