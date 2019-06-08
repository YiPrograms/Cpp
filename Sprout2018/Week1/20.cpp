#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
const int MAX=1000000+10;
int g[MAX];

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int N,c=0;
    while (cin >> N) {
        cout << "Line #" << ++c << "\n";
        memset(g, -1, sizeof(g));
        while (N--) {
            int ki;
            cin >> ki;
            while (ki--) {
                int k;
                cin >> k;
                g[k]=N;
            }
        }
        vector<int> q;
        q.reserve(MAX);
        int f=0;
        string op;
        while (cin >> op) {
            if (op=="ENQUEUE") {
                int k;
                cin >> k;
                if (g[k]==-1) q.push_back(k);
                else {
                    int in=f, found=false;
                    for (; in<q.size(); in++) {
                        if (g[q[in]]==g[k]) {
                            found=true;
                        } else if (found){
                            break;
                        }
                    }
                    q.insert(q.begin()+in, k);
                }
            } else if (op=="DEQUEUE") {
                cout << q[f++] << "\n";
            } else break;
        }
    }
}
