#include <bits/stdc++.h>
using namespace std;

#define x first
#define y second

using pii=pair<int, int>;

pii operator - (pii a, pii b) {
    return make_pair(a.x-b.x, a.y-b.y);
}

long long operator * (pii a, pii b) {
    return a.x*1LL*b.y-a.y*1LL*b.x;
}

pii p[int(1e6)+5];

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++) cin >> p[i].x >> p[i].y;
    int left=0, right=0, turn=0;
    for (int i=2; i<n; i++) {
        pii v1=p[i-1]-p[i-2], v2=p[i]-p[i-1];
        long long cross=v1*v2;
        if (cross>0) left++;
        else if (cross<0) right++;
        else {
            if (v1.x!=0) {
                if (v1.x>0 && v2.x<0) turn++;
                else if (v1.x<0 && v2.x>0) turn++;
            } else {
                if (v1.y>0 && v2.y<0) turn++;
                else if (v1.y<0 && v2.y>0) turn++;
            }
        }
    }
    cout << left << " " << right << " " << turn << "\n";
}
