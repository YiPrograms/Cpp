#include <iostream>
#include <algorithm>
using namespace std;
int a[1000005];
pair<int, int> S[1000005];

int main() {
    int n;
    cin >> n;
    for (int i=1; i<=n; i++) {
        int ai;
        cin >> ai;
        a[i]=ai;
        S[i].first=S[i-1].first+ai;
        S[i].second=i;
    }
    int t=S[n].first;
    sort(S, S+n);
    int l=1, r=n, mid;
    while (r-l>1) {
        mid=(r+l)/2;
        if (t==S[mid].first*2) {l=mid; break;}
        else if (t>S[mid].first*2) l=mid;
        else r=mid;
    }
    int p;
    if (abs(t-S[l].first*2)<abs(t-S[r].first*2)) p=S[l].second+1;
    else p=S[r].second+1;
    cout << p;
}
