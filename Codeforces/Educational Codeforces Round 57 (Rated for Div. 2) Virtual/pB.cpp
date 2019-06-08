#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    long long l=0, r=0;
    long long add=0;
    for (int i=0; i<n; i++) if (s[i]==s[0]) l++; else break;
    for (int i=n-1; i>=0; i--) if (s[i]==s[n-1]) r++; else break;
    if (s[0]==s[n-1]) {
        add=l*r;
    }
    cout << (l+r+add+1)%998244353 << "\n";
}
