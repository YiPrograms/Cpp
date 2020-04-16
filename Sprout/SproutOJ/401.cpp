#include <bits/stdc++.h>
using namespace std;

#define x first
#define y second

using Pt=pair<int, int>;

Pt operator - (const Pt &a, const Pt &b) {
    return make_pair(a.x-b.x, a.y-b.y);
}

long long operator ^ (const Pt &a, const Pt &b) {
    return a.x*1LL*b.y-a.y*1LL*b.x;
}

long long operator * (const Pt &a, const Pt &b) {
    return a.x*1LL*b.x+a.y*1LL*b.y;
}

int ori(const Pt &o ,const Pt &a ,const Pt &b){
    long long cross=(a-o)^(b-o);
    if (cross==0) return 0;
    return cross > 0? 1 : -1;
}

bool online(const Pt &p, const Pt &a, const Pt &b) {
    return ori(p, a, b)==0 && (a-p)*(b-p)<=0;
}

Pt p1, p2, q1, q2;

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> p1.x >> p1.y >> p2.x >> p2.y >> q1.x >> q1.y >> q2.x >> q2.y;
        if (ori(p1, p2, q1)*ori(p1, p2, q2)<0 && ori(q1, q2, p1)*ori(q1, q2, p2)<0) cout << "Yes\n";
        else if (online(p1, q1, q2) || online(p2, q1, q2) || online(q1, p1, p2) || online(q2, p1, p2)) cout << "Yes\n";
        else cout << "No\n";
    }
}
