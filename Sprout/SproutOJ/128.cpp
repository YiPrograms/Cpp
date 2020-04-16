#include <bits/stdc++.h>
using namespace std;

int a[1025][1025];
int k=2;

void Report(int i) {
    cout << i << "\n";
}

bool check(int x, int y, int n) {
    for (int i=x; i<x+n; i++) for (int j=y; j<y+n; j++) {
        if (a[i][j]) return true;
    }
    return false;
}

void cp(int x, int y, int n) {
    if (n==1) return;
    if (n==2) {
        a[x+1][y+1]=a[x][y];
        if (a[x+1][y]) a[x][y+1]=a[x+1][y];
        else a[x+1][y]=a[x][y+1];
    }
}

void cut(int x, int y, int n) {
    if (n==2) {
        if (x==y) {
            a[x][y]=1;
            a[x+1][y]=2;
            a[x][y+1]=3;
            a[x+1][y+1]=1;
        } else {
            a[x+1][y+1]=a[x][y];
            if (a[x+1][y]) a[x][y+1]=a[x+1][y];
            else a[x+1][y]=a[x][y+1];
        }
        return;
    }
    int d=n/2;
    cut(x, y, d);
    for (int i=x; i<x+d; i++) for (int j=y; j<y+d; j++) a[i+d][j+d]=a[i][j];
    cut(x+d, y+d, d);
    cut(x+d, y, d);
    cut(x, y+d, d);
    if (!check(x+d, y, d)) {
        for (int i=x; i<x+d; i++) for (int j=y+d; j<y+n; j++) a[i+d][j-d]=a[i][j];
    } else if (!check(x, y+d, d)) {
        for (int i=x; i<x+d; i++) for (int j=y+d; j<y+n; j++) a[i][j]=a[i+d][j-d];
    }
}

void solve(int N) {
    for (int i=1; i<2*N; i++) {
        if (i&1) a[0][i/2]=i;
        else a[i/2][0]=i;
    }
    cut(0, 0, N);
    ///*
    /*
 for (int i=0; i<N; i++) {

    for (int j=0; j<N; j++) {
        cout << a[i][j] << " ";
        if (a[i][j]<10) cout << " ";
    }
    cout << "\n";
    }*/
 ///
    for (int i=0; i<N; i++) for (int j=0; j<N; j++) Report(a[i][j]);
}

int main() {
    solve(k);
}
