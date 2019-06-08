#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int N;
    while (cin >> N) {
        int cards[N],times[N];
        memset(times, 0, sizeof(times));
        for (int i=0; i<N; i++) cin >> cards[i];
        for (int i=0; i<N; i++) {
            if (times[i]==0) {
                for (int j=0; j<N; j++) {
                    if (cards[j] == cards[i]) times[i]++;
                }
            }
        }
        int maxtimes=0, maxid;
        for (int i=0; i<N; i++) {
            if (times[i] > maxtimes) {
                maxtimes=times[i];
                maxid=i;
            }
        }
        cout << cards[maxid] << " " << times[maxid] << endl;
    }
}
