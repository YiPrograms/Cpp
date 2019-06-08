#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;
    if (m<=3) cout << "spring";
    else if (m<=6) cout << "summer";
    else if (m<=9) cout << "fall";
    else cout << "winter";
    cout << "\n";
}
