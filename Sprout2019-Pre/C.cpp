#include <bits/stdc++.h>
using namespace std;

bool vis[1005][1005];

int main() {
    int t;
    cin >> t;
    while (t--) {
        for (int i=0; i<1005; i++) for (int j=0; j<1005; j++) vis[i][j]=false;
        int n, m;
        cin >> n >> m;
        queue<tuple<int,int,int>> q;
        q.emplace(0, n, m);
        vis[n][m]=true;
        int ans=-1;
        while (!q.empty()) {
            int head, tail, now;
            tie(now, head, tail)=q.front();
            q.pop();
            if (head==0 && tail==0) {
                ans=now;
                break;
            }
            now++;
            if (head>=2) {
                if (!vis[head-2][tail]) {
                    q.emplace(now, head-2, tail);
                    vis[head-2][tail]=true;
                }
            }
            if (tail>=2) {
                if (!vis[head+1][tail-2]) {
                    q.emplace(now, head+1, tail-2);
                    vis[head+1][tail-2]=true;
                }
            } else {
                if (!vis[head][tail+1]) {
                    q.emplace(now, head, tail+1);
                    vis[head][tail+1]=true;
                }
            }
        }
        cout << ans << "\n";
    }
}
