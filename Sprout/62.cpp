#include <bits/stdc++.h>
using namespace std;

int a[9][9];
bool ui[9][10], uj[9][10], ub[3][3][10];

bool perm(int i, int j) {
    if (i==9 && j==0) return true;
    int ni=i, nj=j+1;
    if (nj>=9) nj=0, ni++;
    if (a[i][j]) return perm(ni, nj);
    for (int k=1; k<=9; k++) {
        if (!(ui[i][k] || uj[j][k] || ub[i/3][j/3][k])) {
            a[i][j]=k;
            ui[i][k]=true;
            uj[j][k]=true;
            ub[i/3][j/3][k]=true;
            if (perm(ni, nj)) return true;
            a[i][j]=0;
            ui[i][k]=false;
            uj[j][k]=false;
            ub[i/3][j/3][k]=false;
        }
    }
    return false;
}


int main() {
    char c;
    while (cin >> c) {
        if (c=='e') break;
        if (c=='.') a[0][0]=0; else a[0][0]=c-'0';
        for (int i=0; i<9; i++) for (int j=0; j<9; j++) {
            if (i==0 && j==0) continue;
            char ci;
            cin >> ci;
            if (ci=='.') a[i][j]=0; else a[i][j]=ci-'0';
        }
        memset(ui, 0, sizeof(ui));
        memset(uj, 0, sizeof(uj));
        memset(ub, 0, sizeof(ub));
        bool ok=true;
        for (int i=0; i<9; i++) for (int j=0; j<9; j++) {
            if (a[i][j]==0) continue;
            if (ui[i][a[i][j]] || uj[j][a[i][j]] || ub[i/3][j/3][a[i][j]]) {
                ok=false;
                break;
            }
            ui[i][a[i][j]]=true;
            uj[j][a[i][j]]=true;
            ub[i/3][j/3][a[i][j]]=true;
        }
        if (!ok) cout << "No solution.\n";
        else {
            if (perm(0, 0)) for (int i=0; i<9; i++) for (int j=0; j<9; j++) 
                if (a[i][j]) cout << a[i][j]; else cout << '.';
            else cout << "No solution.";
            cout << "\n";
        }
    }
}
