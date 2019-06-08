#include <bits/stdc++.h>
using namespace std;

map<int, int> cnt;

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        int a;
        cin >> a;
        cnt[a]++;
    }
    int ans=0;
    for (pair<int,int> i:cnt) {
        bool ok=false;
        for (int j=1; j<=30; j++) {
            int a= (1<<j)-i.first;
            if (a<0) continue;
            if ((a==i.first && i.second>=2) || (a!=i.first && cnt.count(a))) {
                ok=true;
                break;
            }
        }
        if (!ok) ans+=i.second;
    }
    cout << ans << "\n";
}

