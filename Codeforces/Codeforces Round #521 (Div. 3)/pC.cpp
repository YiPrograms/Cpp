#include <bits/stdc++.h>
using namespace std;

int a[200005];

int main() {
    int n;
    cin >> n;
    long long sum=0;
    multiset<int> ms;
    set<int> isans;
    for (int i=0; i<n; i++) {
        cin >> a[i];
        sum+=a[i];
        ms.insert(a[i]);
    }
    int cnt=0;
    vector<int> ans;
    for (int i=0; i<n; i++) {
        if (isans.find(a[i])!=isans.end()) {
            cnt++;
            ans.emplace_back(i+1);
            continue;
        }
        if (sum-a[i]==a[i]) {
            if (ms.count(sum-a[i])>1) {
                cnt++;
                ans.emplace_back(i+1);
                isans.insert(a[i]);
            }
        } else if (ms.count(sum-a[i])) {
            cnt++;
            ans.emplace_back(i+1);
            isans.insert(a[i]);
        }
    }
    cout << cnt << "\n";
    for (int v:ans) cout << v << " ";
    cout << "\n";
}
