#include <bits/stdc++.h>
using namespace std;

int a[int(1e6)+5];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        stack<pair<int, int>> s;
        for (int i=0; i<n; i++) cin >> a[i];
        long long ans=0;
        for (int i=0; i<n; i++) {
            while (!s.empty() && s.top().first<a[i]) {
                ans+=s.top().second;
                s.pop();
            }
            if (!s.empty() && s.top().first==a[i]) {
                pair<int, int> tp=s.top();
                s.pop();
                ans+=tp.second;
                tp.second++;
                if (!s.empty()) ans++;
                s.emplace(tp);
            } else {
                if (!s.empty()) ans++;
                s.emplace(a[i], 1);
            }
        }
        cout << ans << "\n";
    }
}
