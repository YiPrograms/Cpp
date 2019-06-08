#include <bits/stdc++.h>
using namespace std;

queue<int> q;

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
            q.emplace(n);
        } else {
            if (q.empty()) cout << "empty!\n";
            else {
                int n=q.front();
                q.pop();
                cout << n << "\n";
            }
        }
    }
}
