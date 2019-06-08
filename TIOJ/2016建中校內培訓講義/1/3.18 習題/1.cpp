#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
bool bad[10000+10];
vector<int> link[10000+10];

bool isbad(int x);
int main() {
    int N, M, L, Q;
    cin >> N >> M >> L >> Q;
    for (int i=0; i<M; i++) {
        int a, b;
        cin >> a >> b;
        link[b].push_back(a);
    }
    for (int i=0; i<L; i++) {
        int x;
        cin >> x;
        bad[x]=true;
    }
    for (int i=0; i<Q; i++) {
        int y;
        cin >> y;
        cout << (isbad(y) ? "TUIHUOOOOOO" : "YA~~") << "\n";
    }
}

bool isbad(int x) {
    if (bad[x]) return true;
    for (int j=0; j<link[x].size(); j++) {
        if (isbad(link[x][j])) return true;
    }
    return false;
}
