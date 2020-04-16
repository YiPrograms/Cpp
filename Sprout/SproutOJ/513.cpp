#include <bits/stdc++.h>
using namespace std;

int a[int(2e5)+5], l[int(2e5)+5], r[int(2e5)+5];
stack<pair<int, int>> sl, sr;

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n; i++) {
        if (!sl.empty() && sl.top().first>a[i]) sl.pop();
        if (sl.empty()) l[i]=i;
        else l[i]=i-sl.top().second-1;
        if (sl.empty() || sl.top().first!=a[i]) sl.emplace(a[i], i);
    }
    for (int i=n-1; i>=0; i--) {
        if (!sr.empty() && sr.top().first>a[i]) sr.pop();
        if (sr.empty()) r[i]=n-1-i;
        else r[i]=sr.top().second-i-1;
        if (sr.empty() || sr.top().first!=a[i]) sr.emplace(a[i], i);
    }
    long long ans=0;
    for (int i=0; i<n; i++) {
        cout << l[i] << " " << r[i] << "\n";
        ans=max(ans, a[i]*1LL*(1+l[i]+r[i]));
    }
    cout << ans << "\n";
}
