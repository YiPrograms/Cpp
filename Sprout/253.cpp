#include <bits/stdc++.h>
using namespace std;

const int M=int(1e9)+7;

int a[5005];
vector<pair<int, int>> v[5005];
/// index, cnt suffix sum
int b[5005];
int vi[5005];
vector<int> ans;

bool cmp (const pair<int, int> &pa, const pair<int, int> &pb) {
    return (a[pa.first]==a[pb.first] && pa.second<pb.second) || a[pa.first]<a[pb.first];
}

int main() {
    int n;
    cin >> n;
    for (int i=1; i<=n; i++) cin >> a[i];
    int ed=1;
    v[0].emplace_back(0, 1);
    for (int i=1; i<=n; i++) {
        int* ub=upper_bound(b, b+ed, a[i]);
        int ind=ub-b;
        ed=max(ed, ind+1);
        auto it=upper_bound(v[ind-1].rbegin(), v[ind-1].rend(), make_pair(i, int(1e9)), cmp);
        int cnt=v[ind-1].rbegin()->second;
        if (it!=v[ind-1].rend()) cnt=(cnt+M-it->second)%M;
        if (!v[ind].empty()) cnt=(v[ind].rbegin()->second+cnt)%M;
        v[ind].emplace_back(i, cnt);
        b[ind]=a[i];
        vi[i]=v[ind-1].size()-(it-1-v[ind-1].rbegin())-1;
    }
    cout << ed-1 << "\n" << v[ed-1].rbegin()->second << "\n";
    int ind=0;
    for (int i=ed-1; i>0; i--) {
        ans.emplace_back(v[i][ind].first);
        ind=vi[v[i][ind].first];
    }
    for (auto i=ans.rbegin(); i<ans.rend(); i++) {
        if (i!=ans.rbegin()) cout << " ";
        cout << *i;
    }
    cout << "\n";
}
