#include <bits/stdc++.h>
using namespace std;

int f(int n) {
    if (n==1) return 1;
    if (n%2==0) return f(n/2)*2-1;
    return f(n/2)*2+1;
}

int main() {
    int n;
    cin >> n;
    cout << f(n) << "\n";
}
