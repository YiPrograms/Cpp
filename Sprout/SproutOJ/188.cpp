#include <bits/stdc++.h>
using namespace std;

int val[int(1e5)+5];
deque<pair<int, int>> t;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, k, c;
        cin >> n >> k >> c;
        t.clear();
        for (int i=0; i<n; i++) cin >> val[i];
        int ans=-1e9;
        for (int i=0; i<n; i++) {
            while (!t.empty() && i-t.front().second>k) t.pop_front();
            int dp=val[i];
            if (!t.empty()) {
                if (t.front().first-c*i>0) dp+=t.front().first-c*i;
            }
            while (!t.empty() && dp+c*i>=t.back().first) t.pop_back();
            t.emplace_back(dp+c*i, i);
            ans=max(ans, dp);
        }
        cout << ans << "\n";
    }
}
