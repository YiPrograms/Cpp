#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (n%2 && m%2) cout << (n/2)*m+m/2 << "\n";
    else if (n%2) cout << (m/2)*n << "\n";
    else if (m%2) cout << (n/2)*m << "\n";
    else cout << (n/2)*m << "\n";
}
