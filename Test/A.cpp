#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define iostie ios::sync_with_stdio(false);cin.tie(0);

const int INF=1e9;
const int MAXN=100005,MAXM=300005;
int dS[MAXN],dA[MAXN],dB[MAXN];
bool visit[MAXN];
vector <int>  graph[MAXM];

void bfs(int start,char check, int* distance){ ///用指標把要使用的distance傳進來
  //int visit[MAXN]; ///不要在函數裡定義大到MAXN的東西，有可能Stack的Memory limit會爆炸
  //int distance[MAXN];
  memset(visit, 0, sizeof(visit));
  for (int i=0; i<MAXN; i++) distance[i]=INF;
  queue <int> q;
  q.push(start);
  visit[start]=1;
  distance[start]=0; ///////////////////////////////////////// 忘記這行了！！！！
  while(!q.empty()){
    int i=q.front();
    q.pop();
    int ssize=graph[i].size();
    for(int j=0;j<ssize;j++){ /// 其實可以用 Range-based For -> for(int v:graph[i])
        if (!visit[graph[i][j]]) {
            q.push(graph[i][j]);
            visit[graph[i][j]]=1;
            distance[graph[i][j]]=distance[i]+1;
        }
    }
  }/*
  if(check=='s'){
    for(int i=0;i<MAXN;i++){
      dS[i]=distance[i];
    }
  }
  else if(check=='a'){
    for(int i=0;i<MAXN;i++){
      dA[i]=distance[i];
    }
  }
  else
    for(int i=0;i<MAXN;i++){
      dB[i]=distance[i];
    }*/
}

int main(){
  iostie;
  int n,m,tmp,ans=0;
  cin >> n >> m;
  int s,a,b;
  cin >> s >> a >> b;
  tmp=m;
  while (tmp--){
    int y,z;
    cin >> y >> z;
    graph[y].push_back(z);
    graph[z].push_back(y); /// Non-directional graph
  }
  bfs(s,'s',dS); /// 傳入指標
  bfs(a,'a',dA);
  bfs(b,'b',dB);
  for(int i=1;i<=n;i++){ //////////////////////////////////// i<n!!!!!
        cout << dS[i] << "\n";
    if(dS[a]==dS[i]+dA[i] && dS[b]==dS[i]+dB[i]){
      ans=max(ans,dS[i]);
    }
  }
  cout << ans << endl;
  return 0;
}
