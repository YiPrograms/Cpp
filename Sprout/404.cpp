#include <bits/stdc++.h>
using namespace std;

const int MAXN=1e6+5;
const long long INF=1e18;

string S;
int n;
int F[MAXN];
long long dps[MAXN];
long long ans=0;

long long dp(int i) {
    if (dps[i]!=-1) return dps[i];
    if (F[i]==-1) return dps[i]=i;
    if (F[i]==0) return dps[i]=0;
    return dps[i]=min(INF, dp(F[i]));
}

void KMP_Build() {
    int p=F[0]=-1;
    for (int i=1; i<int(S.length()); i++) {
        while (p!=-1 && S[p+1]!=S[i]) p=F[p];
        if (S[p+1]==S[i]) p++;
        F[i]=p;
    }
}

int main() {
    cin >> n >> S;
    KMP_Build();
    fill(dps, dps+n, -1);
    for (int i=1; i<n; i++) {
        if (dp(i)!=INF) ans+=i-dp(i);
    }
    cout << ans << "\n";
}
