#include <bits/stdc++.h>
using namespace std;
int b[125];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    b['{']=1;
    b['[']=2;
    b['(']=3;
    b['}']=4;
    b[']']=5;
    b[')']=6;
    int N;
    cin >> N;
    while (N--) {
        string S;
        cin >> S;
        stack<int> st;
        bool ans=true;
        for (int i=0; i<(int)S.length(); i++) {
            if (b[S[i]]<=3) {
                if (st.empty() || b[S[i]]>=st.top()) st.emplace(b[S[i]]);
                else {
                    ans=false;
                    break;
                }
            } else {
                if (!st.empty()) {
                    if (b[S[i]]==st.top()+3) st.pop();
                    else {
                        ans=false;
                        break;
                    }
                } else {
                    ans=false;
                    break;
                }
            }
        }
        if (!st.empty()) ans=false;
        cout << (ans? "Yes": "No") << "\n";
    }
}
