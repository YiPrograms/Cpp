#include <bits/stdc++.h>
using namespace std;

/// a x^2 + b x + c = d
/// a x^2 + b x + c-d = 0
/// x = -b/2a
/// f(x) = b^2 + 4a(d-c) / 4a^2

int gcd(int a, int b) {
    if (a==0) return b;
    return gcd(b%a, a);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;
    while (N--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int e, f, g, h;
        e = -b;
        f = 2*a;
        g = b*b + 4*a*(d-c);
        h = 4*a*a;
        int ga=gcd(e,f), gb=gcd(g,h);
        e/=ga;
        f/=ga;
        g/=gb;
        h/=gb;
        if (f<0) {
            e*=-1;
            f*=-1;
        }
        if (h<0) {
            g*=-1;
            h*=-1;
        }
        cout << e << "/" << f << " " << g << "/" << h << "\n";
    }
}
