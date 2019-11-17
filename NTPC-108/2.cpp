#include <bits/stdc++.h>
using namespace std;

int a[40];

int main() {
    int n=1;
    for (; cin>>a[n]; n++);
    vector<pair<pair<int, int>, int>> ans;
    for (int i=2; i<n-1; i++) {
        if (a[i-1]<a[i]) {
            int s=i;
            while (i+1<n && a[i+1]==a[i]) i++;
            if (i+1<n && a[i]>a[i+1]) ans.emplace_back(make_pair(s, i), a[i]);
        }
    }
    if (ans.empty()) cout << "0 0\n";
    else {
        for (auto k:ans) {
            if (k.first.first==k.first.second) cout << k.first.first;
            else cout << k.first.first << " " << k.first.second;
            cout << " " << k.second << "\n";
        }
    }
}
