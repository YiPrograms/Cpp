#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n==0) break;
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for (int i=0; i<n; i++) {
            int ai;
            cin >> ai;
            pq.emplace(ai);
        }
        long long ans=0;
        while (pq.size()>1) {
            long long res=pq.top();
            pq.pop();
            res+=pq.top();
            pq.pop();
            ans+=res;
            pq.emplace(res);
        }
        cout << ans << "\n";
    }
}
