#include <bits/stdc++.h>
using namespace std;

stack<int> s;
queue<int> q;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        while (!s.empty()) s.pop();
        while (!q.empty()) q.pop();
        int n;
        cin >> n;
        for (int i=0; i<n; i++) {
            int a;
            cin >> a;
            q.emplace(a);
        }
        for (int i=1; i<=n; i++) {
            s.emplace(i);
            while (!s.empty() && s.top()==q.front()) {
                s.pop();
                q.pop();
            }
        }
        if (s.empty()) cout << "Yes\n";
        else cout << "No\n";
    }
}
