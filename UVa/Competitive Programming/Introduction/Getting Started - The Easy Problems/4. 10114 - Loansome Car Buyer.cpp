#include <iostream>
using namespace std;

int main() {
    int m, t;
    double first, owe;
    while (cin >> m >> first >> owe >> t) {
        if (m<0) break;
        int mon[t];
        double monr[t];
        for (int i=0; i<t; i++) cin >> mon[i] >> monr[i];
        double car=(owe+first)*(1-monr[0]), re=owe/m;
        int months=1, last=0;
        for (; !(car>owe); months++) {
            if (mon[last+1]==months) last++;
            car*=1-monr[last];
            owe-=re;
        }
        cout << months-1 << (months==2?" month":" months") << "\n";
    }
}
