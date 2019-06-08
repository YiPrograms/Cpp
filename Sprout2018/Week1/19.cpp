#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int ord[N];
        for (int i=0; i<N; i++) cin >> ord[i];
        int s[N], top=-1, now=0;
        for (int i=1; i<=N; i++) {
            s[++top]=i;
            while (s[top]==ord[now]) {
                now++;
                top--;
            }
        }
        if (top==-1) cout << "Yes\n"; else cout << "No\n";
    }
}
