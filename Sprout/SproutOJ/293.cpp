#include <bits/stdc++.h>
using namespace std;
const int maxn=100005;
int n;
vector<int> child[maxn];
int siz[maxn];
int ans=maxn, minsiz=maxn;

int getsize(int x, int par) {
    if (siz[x]) return siz[x];
    int xsiz=1, maxc=-1;
    for (int y:child[x]) {
        if (y==par) continue;
        int ysiz=getsize(y, x);
        xsiz+=ysiz;
        maxc=max(maxc, ysiz);
    }
    maxc=max(maxc, n-xsiz);
    if (maxc!=-1 && (maxc<minsiz || (maxc==minsiz && x<ans)))  {
        minsiz=maxc;
        ans=x;
    }
    return siz[x]=xsiz;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i=0; i<n; i++) child[i].clear();
        memset(siz, 0, sizeof(siz));
        ans=maxn, minsiz=maxn;
        for (int i=0; i<n-1; i++) {
            int x, y;
            cin >> x >> y;
            child[x].emplace_back(y);
            child[y].emplace_back(x);
        }
        getsize(0, -1);
        cout << ans << "\n";
    }
}

