#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
const int MAX=1000000+10;
int s_team[MAX];

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int N, kase=0;;
    while (cin >> N) {
        cout << "Line #" << ++kase << "\n";
        for (int i=1; i<=N; i++) {
            int ki;
            cin >> ki;
            while (ki--) {
                int k;
                cin >> k;
                s_team[k]=i;
            }
        }
        int s[1000][N+1], q[1000], sf[N+1], sr[N+1], qf=-1, qr=-1;
        bool inq[N+1];
        memset(sf, -1, sizeof(sf));
        memset(sr, -1, sizeof(sr));
        memset(inq, false, sizeof(sf));
        string c;
        while (cin >> c) {
            if (c=="ENQUEUE") {
                int x, team;
                cin >> x;
                team=s_team[x];
                if (team==0) {
                    q[++qr]= -x;
                } else {
                    s[team][++sr[team]]=x;
                    if (!inq[team]) {
                        q[++qr]=team;
                        inq[team]=true;
                    }
                }
            } else if (c=="DEQUEUE") {
                int team=q[qf+1];
                cout << (team<0? -team: s[team][++sf[team]]) << "\n";
                if (team>=0 && sf[team]==sr[team]) qf++;
            } else break;
        }

    }
}
