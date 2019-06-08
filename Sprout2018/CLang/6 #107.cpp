#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int fac=1;
    while (n>=1) fac*=n--;
    cout << fac << "\n";
}
