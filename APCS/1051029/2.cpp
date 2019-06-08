#include <iostream>
using namespace std;

int main() {
    int n, m;
    while (cin >> n >> m) {
        int s=0, t[n];
        for (int i=0; i<n; i++) {
            int ti=0;
            for (int j=0; j<m; j++) {
                int xi;
                cin >> xi;
                if (xi>ti) ti=xi;
            }
            t[i]=ti;
            s+=ti;
        }
        cout << s << "\n";
        bool first=true;
        for (int i=0; i<n; i++) {
            if (s%t[i]==0) {
                if (!first) cout << " "; else first=false;
                cout << t[i];
            }
        }
        if (first) cout << -1;
        cout << "\n";
    }
}
