#include <bits/stdc++.h>
#define inRange(r, c, h, w) (r >= 0 && c >= 0 && r < h && c < w)
using namespace std;

bool vis[20][20];
char canvas[20][20];
struct Point {
    int r = 0; int c = 0; char name;
    Point(int a, int b, char ccc) {
        r= a, c = b, c = ccc;
    } 
};
struct TracingPoint {
    string history = "";
    int r = 0, c = 0;
    TracingPoint(int a, int b, string his) {
        r = a, b = c; history = his;
    }
};
bool cmp(Point a, Point b){
    return a.name < b.name;
}

char toHex[20]={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
vector<Point> targets;
int main() {
    int i = 0, j = 0;
    string s;
    while(getline(cin, s)) {
        j = 0;
        for(const auto c: s) {
            canvas[i][j] = c;
            if(c != '0' && c != '1') { targets.emplace_back(Point(i, j, c)); };
            j++;
        } i++;
    }
    int h = i, w = j;
    sort(targets.begin(), targets.end(), cmp);
    int dist = 0;
    int row = targets[0].r, col = targets[0].c;
    TracingPoint globalTracingPoint = TracingPoint(targets[0].r, targets[0].c, "");
    for(const auto t: targets) {
        bool vis[20][20]; memset(vis, 0, sizeof(vis));
        int dx[] = {0, 0, 1, -1};
        int dy[] = {1, -1, 0, 0};
        queue<TracingPoint> q;
        q.emplace(globalTracingPoint);
        while (!q.empty()) {
            TracingPoint tp = q.front(); q.pop();
            int r = tp.r, c = tp.c;
            if(!inRange(r, c, h, w) || vis[r][c] || canvas[r][c] == '1') continue;
            vis[r][c] = 1;
            if(tp.r == t.r && tp.c == t.c) { // target found!
                globalTracingPoint = tp;
                break;
            }
            for(int i = 0; i < 4; i++) {
                q.emplace(TracingPoint{r+dx[i], c+dy[i], tp.history + "-" + toHex[c+dy[i]] + toHex[r+dx[i]]});
            }
        }
    }
    cout << globalTracingPoint.history << endl;
}
