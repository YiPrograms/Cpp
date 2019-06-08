#include <bits/stdc++.h>
using namespace std;

char a[26];
int dp[26][26];

bool cmp(char ca, char cb) {
    if (dp[ca-'A'][cb-'A']) return dp[ca-'A'][cb-'A']>0? true: false;
    cout << "? " << ca << " " << cb << "\n" << flush;
    char res;
    cin >> res;
    dp[ca-'A'][cb-'A']=res=='<'? 1: -1;
    dp[cb-'A'][ca-'A']=res=='<'? -1: 1;
    return res=='<';
}

int main() {
    int n, q;
    cin >> n >> q;
    for (int i=0; i<n; i++) {
        a[i]='A'+i;
    }
    sort(a, a+n, cmp);
    cout << "! ";
    for (char c:a) cout << c;
    cout << "\n";
}
