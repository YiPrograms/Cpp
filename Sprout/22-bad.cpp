#include <bits/stdc++.h>
using namespace std;

int a[int(1e6)+5];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i=0; i<n; i++) cin >> a[i];
        long long ans=0;
        stack<pair<int, int>> s;
        for (int i=0; i<n; i++) {
            while (!s.empty() && s.top().first<a[i]) {
                ans+=s.top().second;
                s.pop();
            }
            if (!s.empty() && s.top().first==a[i]) {
                auto tmp=s.top();
                s.pop();
                tmp.second++;
                s.emplace(tmp);
            } else {
                s.emplace(a[i], 1);
            }
            ans+=s.top().second;
        }
        cout << ans << "\n";
    }
}
