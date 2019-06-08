#include <bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>, greater<int>> pq;

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
            pq.emplace(n);
        } else {
            if (pq.empty()) cout << "empty!\n";
            else {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
    }
}
