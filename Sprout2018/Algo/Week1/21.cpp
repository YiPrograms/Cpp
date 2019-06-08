#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int r[N], pos[N+1];
    for (int i=0; i<N; i++) {
            r[i]=i+1;
            pos[i+1]=i;
    }
    while (M--) {
        int t, x;
        cin >> t >> x;
        if (t==0) {
            r[pos[x]]=0;
        } else {
            int newp=pos[x];
            while (newp>0){
                if (r[--newp]==0) continue;
                else break;
            }
            int y=r[newp];
            r[newp]=x;
            r[pos[x]]=y;
            pos[y]=pos[x];
            pos[x]=newp;
        }
    }
    for (int i=0; i<N; i++) {
        if (r[i]!=0) {cout << r[i];
        if (i!=N-1) cout << " ";}
    }
    cout << "\n";
}
