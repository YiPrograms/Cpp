#include <bits/stdc++.h>
using namespace std;

char a[1005][1005];
bool yvis[1005][1005], bvis[1005][1005], rvis[1005][1005];

int main() {
    int t;
    cin >> t;
    while (t--) {
        memset(a, 0, sizeof(a));
        memset(yvis, 0, sizeof(yvis));
        memset(bvis, 0, sizeof(bvis));
        memset(rvis, 0, sizeof(rvis));
        queue<pair<int, int>> yq, bq, rq;
        int n;
        cin >> n;
        for (int i=0; i<3; i++) {
            char c;
            int x, y;
            cin >> c >> x >> y;
            a[x][y]=c;
            switch (c) {
                case 'Y':
                    yvis[x][y]=true;
                    yq.emplace(x, y);
                    break;
                case 'B':
                    bvis[x][y]=true;
                    bq.emplace(x, y);
                    break;
                case 'R':
                    rvis[x][y]=true;
                    rq.emplace(x, y);
            }
        }
        yq.emplace(-1, -1);
        bq.emplace(-1, -1);
        rq.emplace(-1, -1);
        char tar;
        cin >> tar;
        int ans=0, now=0;
        if (tar=='Y' || tar=='B' || tar=='R') ans++, now++;
        while (!(yq.size()==1 && bq.size()==1 && rq.size()==1)) {
            int x, y;
            while (!yq.empty()) {
                tie(x, y)=yq.front();
                yq.pop();
                if (x==-1) break;
                for (int i=x-1; i<=x+1; i++) for (int j=y-1; j<=y+1; j++) {
                    if (i<0 || i>n-1 || j<0 || j>n-1 || yvis[i][j]) continue;
                    if (a[i][j]==tar) now--;
                    yvis[i][j]=true;
                    switch (a[i][j]) {
                        case 'R':
                            a[i][j]='O';
                            break;
                        case 'P':
                            a[i][j]='D';
                            break;
                        case 'B':
                            a[i][j]='G';
                            break;
                        case 0:
                            a[i][j]='Y';
                    }
                    if (a[i][j]==tar) now++;
                    yq.emplace(i, j);
                }
            }
            while (!bq.empty()) {
                tie(x, y)=bq.front();
                bq.pop();
                if (x==-1) break;
                for (int i=x-1; i<=x+1; i++) for (int j=y-1; j<=y+1; j++) {
                    if (i<0 || i>n-1 || j<0 || j>n-1 || bvis[i][j]) continue;
                    if (a[i][j]==tar) now--;
                    bvis[i][j]=true;
                    switch (a[i][j]) {
                        case 'R':
                            a[i][j]='P';
                            break;
                        case 'O':
                            a[i][j]='D';
                            break;
                        case 'Y':
                            a[i][j]='G';
                            break;
                        case 0:
                            a[i][j]='B';
                    }
                    if (a[i][j]==tar) now++;
                    bq.emplace(i, j);
                }
            }
            while (!rq.empty()) {
                tie(x, y)=rq.front();
                rq.pop();
                if (x==-1) break;
                for (int i=x-1; i<=x+1; i++) for (int j=y-1; j<=y+1; j++) {
                    if (i<0 || i>n-1 || j<0 || j>n-1 || rvis[i][j]) continue;
                    if (a[i][j]==tar) now--;
                    rvis[i][j]=true;
                    switch (a[i][j]) {
                        case 'Y':
                            a[i][j]='O';
                            break;
                        case 'G':
                            a[i][j]='D';
                            break;
                        case 'B':
                            a[i][j]='P';
                            break;
                        case 0:
                            a[i][j]='R';
                    }
                    if (a[i][j]==tar) now++;
                    rq.emplace(i, j);
                }
            }
            ans=max(ans, now);
            yq.emplace(-1, -1);
            bq.emplace(-1, -1);
            rq.emplace(-1, -1);
        }
        cout << ans << "\n";
    }
}
