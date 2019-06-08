#include <bits/stdc++.h>
using namespace std;
static const int INF=INT_MAX;

struct Dinic{
  static const int MXN = 3005;
  struct Edge{ int v,f,re; };
  int n,s,t,level[MXN];
  vector<Edge> E[MXN];
  void init(int _n, int _s, int _t){
    n = _n; s = _s; t = _t;
    for (int i=0; i<n; i++) E[i].clear();
  }
#define PB push_back
#define SZ(x) ((int)x.size())
  void add_edge(int u, int v, int f){
    E[u].PB({v,f,SZ(E[v])});
    E[v].PB({u,0,SZ(E[u])-1});
  }
  bool BFS(){
    for (int i=0; i<n; i++) level[i] = -1;
    queue<int> que;
    que.push(s);
    level[s] = 0;
    while (!que.empty()){
      int u = que.front(); que.pop();
      for (auto it : E[u]){
        if (it.f > 0 && level[it.v] == -1){
          level[it.v] = level[u]+1;
          que.push(it.v);
        }
      }
    }
    return level[t] != -1;
  }
  int DFS(int u, int nf){
    if (u == t) return nf;
    int res = 0;
    for (auto &it : E[u]){
      if (it.f > 0 && level[it.v] == level[u]+1){
        int tf = DFS(it.v, min(nf,it.f));
        res += tf; nf -= tf; it.f -= tf;
        E[it.v][it.re].f += tf;
        if (nf == 0) return res;
      }
    }
    if (!res) level[u] = -1;
    return res;
  }
  int flow(int res=0){
    while ( BFS() )
      res += DFS(s,2147483647);
    return res;
  }
}flow;



int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        flow.init(n+m+2, m+n, m+n+1); /// 0~m-1, m~m+n-1, s=m+n, e=m+n+1
        for (int i=m; i<m+n; i++) {
            int ci;
            cin >> ci;
            flow.add_edge(i, m+n+1, ci);
        }
        for (int i=0; i<m; i++) {
            int ni, pi;
            cin >> ni >> pi;
            flow.add_edge(m+n, i, pi);
            while (ni--) {
                int aij;
                cin >> aij;
                flow.add_edge(i,m+aij, INF);
            }
        }
        //cout << "HI" << "\n";
        cout << flow.flow() << "\n";
    }
}
