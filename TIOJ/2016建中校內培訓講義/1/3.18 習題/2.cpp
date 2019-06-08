#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    int N;
    while (cin >> N) {
        if (N==0) break;
        int ord[N];
        while (cin >> ord[0]) {
            if (ord[0]==0) break;
            for (int i=1; i<N; i++) cin >> ord[i];
            stack<int, vector<int>> q;
            int now=0;
            for (int i=1; i<=N; i++) {
                q.push(i);
                while (!q.empty() && q.top()==ord[now]) {
                    q.pop();
                    now++;
                }
            }
            cout << (q.empty()? "Yes": "No") << "\n";
        }
    }
}
