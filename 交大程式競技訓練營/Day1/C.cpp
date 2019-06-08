#include <bits/stdc++.h>
using namespace std;

int a[int(2e5)+5];
vector<int> ans;

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    long long sum=0;
    for (int i=0; i<n; i++) sum+=a[i];
    int* mp=max_element(a, a+n);
    int m=*mp;
    *mp=0;
    for (int* p=a; p<a+n; p++) {
        if (p==mp) {
            int sm=*max_element(a, a+n);
            if (sum-m-sm==sm) ans.push_back(p-a);
        } else {
            if (sum-*p-m==m) ans.push_back(p-a);
        }
    }
    cout << ans.size() << "\n";
    for (int i:ans) cout << i+1 << " ";
}

