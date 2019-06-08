#include <iostream>
using namespace std;

int main() {
    int R, C;
    cin >> R >> C;
    string m[R];
    for (int i=0; i<R; i++) cin >> m[i];
    int T;
    cin >> T;
    while (T--) {
        int cr, cc;
        cin >> cr >> cc;
        int nr=cr, nc=cc, cou=0, now=0, maxc=0;
        while (--nr>=0 && ++now<=3) if (m[nr][nc]=='!') cou++; else if (m[nr][nc]=='#') break;
        if (cou>maxc) maxc=cou;
        cou=0; now=0; nr=cr; nc=cc;
        while (++nr<R && ++now<=3) if (m[nr][nc]=='!') cou++; else if (m[nr][nc]=='#') break;
        if (cou>maxc) maxc=cou;
        cou=0; now=0; nr=cr; nc=cc;
        while (--nc>=0 && ++now<=3) if (m[nr][nc]=='!') cou++; else if (m[nr][nc]=='#') break;
        if (cou>maxc) maxc=cou;
        cou=0; now=0; nr=cr; nc=cc;
        while (++nc<C && ++now<=3) if (m[nr][nc]=='!') cou++; else if (m[nr][nc]=='#') break;
        if (cou>maxc) maxc=cou;
        cout << maxc << "\n";
    }
}
