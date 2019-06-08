#include <bits/stdc++.h>
#define maxn 300005
using namespace std;


bool vis[maxn];
bool color[maxn];
vector<int> e[maxn];
int ans=0;

bool dfs(int x) {
    if (color[x]) ans++;
    for (int v:e[x]) {
        if (!vis[v]) {
            vis[v]=true;
            color[v]=!color[x];
            return dfs(v);
        } else {
            if (color[x]==color[v]) return false;
        }
    }
    return true;
}

long long power(int k) {
    if (k==1) return 2;
    long long tmp=power(k/2)%998244353;
    if (k%2==0) return tmp*tmp%998244353;
    else return tmp*tmp*2%998244353;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        for (int i=0; i<maxn; i++) {
            vis[i]=false;
            color[i]=false;
            e[i].clear();
        }
        ans=0;
        int n, m;
        cin >> n >> m;
        int s;
        for (int i=0; i<m; i++) {
            int a, b;
            cin >> a >> b;
            e[a].emplace_back(b);
            e[b].emplace_back(a);
            if (i==0) s=a;
        }
        vis[s]=true;
        color[s]=true;
        if (dfs(s)) {
            cout << (power(ans)+power(n-ans))%998244353 << "\n";
        }
        else cout << 0 << "\n";
    }
}
