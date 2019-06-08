#include <bits/stdc++.h>
using namespace std;

int a[int(1e6)+5], b[int(1e6)+5], S[int(1e6)+5], ans;
const int M=10000019;

void d(int l, int r) {
    if (l==r) {
        S[l]=a[l];
        return;
    }
    int m=(l+r)>>1;
    d(l, m);
    d(m+1, r);
    int li=l, ri=m+1, bi=l;
    while (li<=m && ri<=r) {
        if (a[li]>a[ri]) {
            ans+=a[ri]*1LL*(m-li+1)%M+S[m]-(li-1>=l? S[li-1]: 0);
            ans%=M;
            b[bi++]=a[ri++];
        } else {
            b[bi++]=a[li++];
        }
    }
    while (li<=m) b[bi++]=a[li++];
    while (ri<=r) b[bi++]=a[ri++];
    a[l]=S[l]=b[l];
    for (int i=l+1; i<=r; i++) {
        a[i]=b[i];
        S[i]=(S[i-1]+b[i])%M;
    }
}

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    d(0, n-1);
    cout << ans << "\n";
}
