#include <iostream>
using namespace std;

int main() {
    int N;
    while (cin >> N) {
        if (N>=60) {
            cout << "PASS";
        } else {
            cout << "FAIL";
        }
        cout << endl;
    }
}
