#include <bits/stdc++.h>
using namespace std;

const int maxn=int(1e5)+5;

int N, Q, K;
int a[maxn];
int app[maxn], cnt[maxn], curMax, ans[maxn];

struct Query {
    int L, R, id, bid;
} qry[maxn];

bool cmp(Query a, Query b) {
    if (a.bid==b.bid) return a.R<b.R;
    return a.bid<b.bid;
}

void init() {
    cnt[0]=N;
    K=sqrt(N);
}

void add(int x) {
    int now= ++app[x];
    cnt[now-1]--;
    cnt[now]++;
    curMax=max(curMax, now);
}

void rm(int x) {
    int now=--app[x];
    cnt[now+1]--;
    cnt[now]++;
    if (!cnt[curMax]) {
        curMax--;
    }
}

int main() {
    cin >> N >> Q;
    init();
    for (int i=1; i<=N; i++) {
        cin >> a[i];
    }
    for (int i=1; i<=Q; i++) {
        int l, r, bid;
        cin >> l >> r;
        bid=l/K;
        qry[i]={l, r, i, bid};
    }
    sort(qry, qry+Q, cmp);
    for (int i=1, cL=1, cR=0; i<=Q; i++) {
        while (cR<qry[i].R) add(a[++cR]);
        while (cR>qry[i].R) rm(a[cR--]);
        while (cL>qry[i].L) add(a[--cL]);
        while (cL<qry[i].L) rm(a[cL++]);
        ans[qry[i].id]=curMax;
    }
    for (int i=1; i<=Q; i++) {
        cout << ans[i] << "\n";
    }
}
