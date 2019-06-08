#include <iostream>

using namespace std;

int main() {
    int N,M;
    while (cin >> N >> M) {
        int cb[M];
        for (int i=0; i<M; i++) cin >> cb[i];
        bool first=true;
        for (int i=1; i<=N; i++) {
            bool found=false;
            for (int j=0; j<M; j++) {
                if (i==cb[j]){
                    found=true;
                    break;
                }
            }
            if (!found) {
                if (!first) {
                        cout << " ";
                } else first=false;
                cout << i;
            }
        }
        cout << endl;
    }
}
