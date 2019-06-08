#include <bits/stdc++.h>
using namespace std;
using ld=long double;

ld d2r(ld deg) {
    return deg*3.14159265358979323846/180;
}

int main() {
    ld sta, m, x, y, q;
    int t;
    cin >> sta >> m >> x >> y >> q >> t;
    ld ans=0;
    ld sinc=sin(d2r(sta)), cosc=cos(d2r(sta));
    ans-=m*10*sinc;
    //cout << ans << "\n";
    while (t--) {
        ld qi, xi, yi;
        cin >> qi >> xi >> yi;
        ld dx=xi-x, dy=yi-y;
        ld f=-(9*qi*q)/(dx*dx+dy*dy);
        //cout << f << "\n";
        ans+=f*((dx*cosc+dy*sinc)/(sqrt(dx*dx+dy*dy)));
        //cout << (dx*cosc+dy*sinc)/(sqrt(dx*dx+dy*dy)) << "\n";
        //cout << dx << " " << dy << "\n";
        //cout << (dx*cosc+dy*sinc) << " / " << (sqrt(dx*dx+dy*dy)) << "\n";
        //cout << ans << "\n";
    }
    ans=abs(ans);
    ans=floor(ans*10000.0)/10000.0;
    cout<<fixed<<setprecision(4)<<ans<<'\n';
}
