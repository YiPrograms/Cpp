#include <bits/stdc++.h>
using namespace std;

int h[300005];

int main() {
    int n;
    cin >> n;
    for (int i=n-1; i>=0; i--) cin >> h[i];
    int ans=0;
    stack<int> s;
    for (int i=0; i<n; i++) {
        while (!s.empty() && h[i]>h[s.top()]) s.pop();
        ans+=(s.empty()? i:(i-s.top()));
        s.emplace(i);
    }
    cout << ans << "\n";
}


