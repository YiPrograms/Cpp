#include <bits/stdc++.h>
using namespace std;

const int MAXN=10000005, MAXT=sqrt(MAXN)+5;
int S[MAXN], Max[MAXT], Tag[MAXT];
int n, K;

void init() {
    K=sqrt(n);
    memset(Max, 0, sizeof(int)*n);
    memset(Tag, -1, sizeof(Tag));
    for(int i=0; i<n; i++) Max[i/K]=max(Max[i/K], S[i]);
}

void Modify(int L, int R, int y) {
    for (int i=L; i<=R; ) {
        int id=i/K;
        int l=id*K;
        int r=min(n, (id+1)*K);
        if(i==l && R>=r-1) {
            Tag[id]=y;
            i=r;
        } else {
            if (~Tag[id]) {
                for (int j=l; j<r; j++) S[j]=Tag[id];
                Max[id]=Tag[id];
                Tag[id]=-1;
            }
            Max[id]=max(Max[id], y);
            S[i]=y;
            i++;
        }
    }
}

int main() {
    int T;
    cin >> n >> T;
    init();
    while (T--) {
        int a, l, r;
        cin >> l >> r >> a;
        Modify(l, r, a);
    }
    cout << *max_element(Max, Max+MAXT) << "\n";
}


