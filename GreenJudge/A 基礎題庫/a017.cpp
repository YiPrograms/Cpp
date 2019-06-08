#include <iostream>
using namespace std;

int main() {
    int N;
    while (cin >> N) {
        if (N<60) cout << "E";
        else if (N<70) cout << "D";
        else if (N<80) cout << "C";
        else if (N<90) cout << "B";
        else cout << "A";
        cout << endl;
    }
}
