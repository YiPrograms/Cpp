#include <bits/stdc++.h>
using namespace std;

vector<int> ans[9];

int f(int n) {
    int ans=1;
    while (n>0) {
        if (n%10) ans*=n%10;
        n/=10;
    }
    return ans;
}

int g(int n) {
    if (n<10) return f(n);
    return g(f(n));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    for (int i=1; i<=int(1e6); i++) ans[g(i)].push_back(i);

    int t;
    cin >> t;
    while (t--) {
        int l, r, k;
        cin >> l >> r >> k;
        cout << upper_bound(ans[k].begin(), ans[k].end(), r)-lower_bound(ans[k].begin(), ans[k].end(), l) << "\n";
    }
}
