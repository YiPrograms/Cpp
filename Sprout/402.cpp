#include <bits/stdc++.h>
using namespace std;

using Pt=pair<int, int>;
#define x first
#define y second

Pt operator - (const Pt &a, const Pt &b) {
    return make_pair(a.x-b.x, a.y-b.y);
}

long long operator ^ (const Pt &a, const Pt &b) {
    return a.x*1LL*b.y-a.y*1LL*b.x;
}

int rotation(const Pt &o, const Pt &a, const Pt &b) { // 1=ccw, 0=//, -1=cw
    long long cross=(a-o)^(b-o);
    if (cross==0) return 0;
    return cross>0? 1: -1;
}

vector<Pt> ps, upCH, downCH;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ps.clear();
        upCH.clear();
        downCH.clear();
        int n;
        cin >> n;
        for (int i=0; i<n; i++) {
            int xi, yi;
            cin >> xi >> yi;
            ps.emplace_back(xi, yi);
        }
        sort(ps.begin(), ps.end());
        for (Pt p:ps) {
            while (upCH.size()>=2 && rotation(*(upCH.end()-2), *(upCH.end()-1), p) <=0 ) upCH.pop_back();
            while (downCH.size()>=2 && rotation(*(downCH.end()-2), *(downCH.end()-1), p) >=0 ) downCH.pop_back();
            upCH.emplace_back(p);
            downCH.emplace_back(p);
        }
        
        long long A=0;
        for (int i=1; i<int(upCH.size()); i++) {
            A+= upCH[i-1]^upCH[i];
        }
        for (int i=downCH.size()-1; i>=1; i--) {
            A+= downCH[i]^downCH[i-1];
        }
        cout << A/2;
        if (A&1) cout << ".5\n";
        else cout << ".0\n";
    }
}
