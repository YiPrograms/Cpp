#include <bits/stdc++.h>
using namespace std;

stack<int> s;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int a;
        cin >> a;
        if (a==1) {
            int n;
            cin >> n;
            s.emplace(n);
        } else {
            if (s.empty()) cout << "empty!\n";
            else {
                int n=s.top();
                s.pop();
                cout << n << "\n";
            }
        }
    }
}
