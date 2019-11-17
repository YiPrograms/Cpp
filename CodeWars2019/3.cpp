#include <bits/stdc++.h>
using namespace std;

string s[1000];
int vis[1005][1005];
int n=0;

int dx[]={1, 1, 1, -1, -1, -1, 0, 0},
    dy[]={0, 1, -1, 0,  1, -1, 1, -1};
char table[200000];
int dfs(int x, int y) {
    int w=1;
    if (x<0 || x>=n || y<0 || y>=s[x].length()) return 0;
    /*if (s[x][y]=='Y' && s[x-1][y+1]==',') {
        w=1+dfs(x-1, y+1);
        goto pas;
    }*/
    if (vis[x][y] || s[x][y]==' ') return 0;
    //pas:;
    if (s[x][y]=='+') w+=100;
    if (s[x][y]=='k') w+=123;
    if (s[x][y]=='*') w+=2000;
    if (s[x][y]=='c') w+=1000;
    if (s[x][y]=='y') w+=173;
    vis[x][y]=true;
    for (int i=0; i<8; i++) {
        w+=dfs(x+dx[i], y+dy[i]);
    }
    return w;
}

vector<pair<int, int>> ans;

int main() {
    
table[2067] = 'a';
table[2077] = 'b';
table[174] = 'c';
table[6080] = 'd';
table[260] = 'e';
table[4060] = 'f';
table[4096] = 'g';
table[213] = 'h';
table[44] = 'i';
table[56] = 'j';
table[4090] = 'k';
table[2052] = 'l';
table[4112] = 'm';
table[4199] = 'n';
table[4068] = 'o';
table[4089] = 'p';
table[73] = 'q';
table[2163] = 'r';
table[2299] = 's';
table[4051] = 't';
table[197] = 'u';
table[2077] = 'v';
table[2235] = 'w';
table[4186] = 'x';
table[2208] = 'y';
table[2416] = 'z';
table[2013] = '.';
table[6062] = '?';






    while (getline(cin, s[n])) n++;
    for (int i=0; i<n; i++) {
        for (int j=0; j<s[i].length(); j++) {
            if (s[i][j]!=' ' && !vis[i][j]) {
                int res=dfs(i, j);
                if (res<5) continue;
                //cout << i << " " << j << "\n";
                ans.emplace_back(j, res);
            }
        }
    }
    sort(ans.begin(), ans.end());
    for (pair<int, int> k:ans) cout << k.second << " ";
    cout << "\n";
}
