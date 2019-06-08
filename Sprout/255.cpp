#include <bits/stdc++.h>
using namespace std;

#define x first
#define y second

using Pt=pair<int, int>;

Pt p[30];
map<pair<Pt, Pt>, int> line;
//      {a, b},items 
vector<int> pass[30];
int dps[(1<<25)];

int dp(int items) {
    if (dps[items]!=-1) return dps[items];
    if (items==0) return 0;
    int res=1e9;
    int last=__lg(items&-items);
    //cout << last << " " << bitset<32>(items) << "\n";
    for (int hit:pass[last]) {
        res=min(res, dp(items & ~hit));
    }
    /*for (auto l:line) {
        int hit=l.y;
        if (!(items&hit)) continue;
        res=min(res, dp(items & ~hit));
    }*/
    return dps[items]=res+1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        line.clear();
        memset(dps, -1, sizeof(dps));
        for (int i=0; i<n; i++) pass[i].clear();
        for (int i=0; i<n; i++) cin >> p[i].x >> p[i].y;
        int ok=0;
        for (int i=0; i<n; i++) for (int j=i+1; j<n; j++) { /// a=(x2y1-x1y2)/m, b=(x1^2y2-x2^2y1)/m
            int m= (p[i].x-p[j].x) * p[i].x * p[j].x;
            int ac= p[j].x*p[i].y - p[i].x*p[j].y;
            int bc= p[i].x*p[i].x * p[j].y - p[j].x*p[j].x * p[i].y;
            if (m==0) continue;
            if (m*1LL*ac>=0) continue;
            if (m<0) {
                m*=-1;
                ac*=-1;
                bc*=-1;
            }
            int ga=__gcd(m, ac), gb=__gcd(m, bc);
            pair<Pt, Pt> ab=make_pair( make_pair(ac/ga, m/ga), make_pair(bc/gb, m/gb) );
            line[ab] |= ((1<<i)|(1<<j));
            ok |= ((1<<i)|(1<<j));
        }
        for (auto l:line) {
            int items=l.y;
            for (int i=0; i<n; i++) {
                if (items&(1<<i)) pass[i].emplace_back(items); 
            }
        }
        int alone=0;
        for (int i=0; i<n; i++) {
            if (!(ok&(1<<i))) alone++;
        }
        /*for (int i=0; i<n; i++) {
            cout << i << "\n";
            for (int k:pass[i]) {
                bitset<32> b(k);
                cout << b << "\n";
            }
        }
        for (auto ppi:line) {
            bitset<32> tmp(ppi.y);
            Pt a=ppi.x.x;
            Pt b=ppi.x.y;
            cout << a.x*1.0/a.y << " " << b.x*1.0/b.y << " ";
            cout << tmp << "\n";
        }*/
        cout << alone+dp(ok) << "\n";
    }
}
