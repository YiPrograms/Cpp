#include <bits/stdc++.h>
using namespace std;

int pos[2][9];
int hlh[2][9], atk[2][9], def[2][9];
int atp[2][10];

int main() {
    int T;
    cin >> T;
    while (T--) {
        for (int i=1; i<=9; i++) {
            atp[0][i]=-1;
            atp[1][i]=-1;
        }
        int N, M, Q;
        cin >> N >> M >> Q;
        int ppl[2]={N, M};
        for (int i=0; i<N; i++) {
            cin >> pos[0][i] >> hlh[0][i] >> atk[0][i] >> def[0][i];
            atp[0][pos[0][i]]=i;
        }
        for (int i=0; i<M; i++) {
            cin >> pos[1][i] >> hlh[1][i] >> atk[1][i] >> def[1][i];
            atp[1][pos[1][i]]=i;
        }
        int winner=-1; // -2:WHAT -1:Draw 0:Win 1:Lose
            for (int u=1;u<=Q; u++) {
                int i=1;
                if (u%2) i=0;

cout << "Round" << u <<" Attacker:" << i << "\n";

                int w[3], e[3];
                char x[3];
                for (int k=0; k<3; k++) {
                    cin >> w[k] >> e[k] >> x[k];
                }
                double combo=1.0;
                int en=(i==0? 1: 0);
                if (w[0]==w[1] && w[1]==w[2]) combo=1.2;
cout << (combo==1.2? "Using combo 1.2\n":"");
                for (int k=0; k<3; k++) {
                    int atker=atp[i][w[k]], defer=atp[en][e[k]];
                    if (atker==-1 || hlh[i][atker]<0){
                        winner=-2;
                        goto quit;
                    }
                    if (x[k]=='A') {
cout << atker << " Attacking " << defer << " ";
                        if (defer==-1) continue;
                        hlh[en][defer]-=max((int)floor(floor((double)atk[i][atker]-(double)def[en][defer]/3)*combo), 0);
cout << "Remaining Health: " << hlh[en][defer] << "\n";
                    } else {
                        for (int j=e[k]-((e[k]-1)%3), l=0; l<3; j++, l++) {
cout << atker << " Triple Attacking " << atp[en][j] << "\n";
                            if (atp[en][j]==-1) continue;
                            hlh[en][atp[en][j]]-=max((int)floor(floor((double)atk[i][atker]-(double)def[en][defer]/3)*combo*0.8), 0);
cout << "Remaining Health: " << hlh[en][atp[en][j]] << "\n";
                        }
                    }
                }
                bool alldead=true;
cout << "\nRound Over, Enemy Health: ";
                for (int j=0; j<ppl[en]; j++) {
                    if (hlh[en][j]>0) {
                        alldead=false;
//                        break;
                    }
cout << hlh[en][j] << " ";
                }
cout << "\n\n";
                if (alldead) {
                    winner=i;
                    goto quit;
                }
        }
        quit:;
        switch (winner) {
        case -2:
            cout << "WHAT!?" << "\n";
            break;
        case -1:
            cout << "Draw!" << "\n";
            break;
        case 0:
            cout << "Win!" << "\n";
            break;
        case 1:
            cout << "Lose!" << "\n";
        }
    }
}
