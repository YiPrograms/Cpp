#include <bits/stdc++.h>
using namespace std;

void Report(int a, int b, int c, int d, int e, int f) {
}

void cut(int n, int x, int y, int bx, int by) {
    if (n==1) return;
    int mx=x+n/2, my=y+n/2;
    if (bx>=mx) { /// Right
        if (by>=my) { /// Down Right
            Report(mx, my-1, mx-1, my-1, mx-1, my);
            cut(n/2, x, y, mx-1, my-1);
            cut(n/2, mx, y, mx, my-1);
            cut(n/2, x, my, mx-1, my);
            cut(n/2, mx, my, bx, by);
        } else { /// Top Right
            Report(mx, my, mx-1, my, mx-1, my-1);
            cut(n/2, x, y, mx-1, my-1);
            cut(n/2, mx, y, bx, by);
            cut(n/2, x, my, mx-1, my);
            cut(n/2, mx, my, mx, my);
        }
    } else { /// Left
        if (by>=my) { /// Down Left
            Report(mx, my, mx-1, my-1, mx, my-1);
            cut(n/2, x, y, mx-1, my-1);
            cut(n/2, mx, y, mx, my-1);
            cut(n/2, x, my, bx, by);
            cut(n/2, mx, my, mx, my);
        } else { /// Top Left
            Report(mx, my, mx-1, my, mx, my-1);
            cut(n/2, x, y, bx, by);
            cut(n/2, mx, y, mx, my-1);
            cut(n/2, x, my, mx-1, my);
            cut(n/2, mx, my, mx, my);
        }
    }
}

void solve(int N, int X, int Y) {
    cut(N, 1, 1, X, Y);
}

int main() {

}


