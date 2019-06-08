#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        if (n>k) {
            n-=k;
            if (n%(k+1)) cout << "First\n";
            else cout << "Second\n";
        } else {
            if (n==0) cout << "Second\n";
            else cout << "First\n";
        }
    }
}
