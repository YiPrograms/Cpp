#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a,b;
    while (cin >> a >> b) {
        cout << fixed << setprecision(0) << floor(b*log10(a))+1 << endl;
    }
}
