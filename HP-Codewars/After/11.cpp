#include <bits/stdc++.h>
using namespace std;

int b[105], dp[1001];

int main() {
    int n, k;
    cin >> n;
    for (int i=0; i<n; i++) cin >> b[i];
    cin >> k;
    for (int i=1; i<=k; i++) {
        bool pass=false;
        int res=1000000;
        for (int j=0; j<n; j++) {
            if (i-b[j]<0 || dp[i-b[j]]<0) continue;
            pass=true;
            res=min(res,1+dp[i-b[j]]);
        }
        if (pass) dp[i]=res;
        else dp[i]=-1;
    }
    cout << (dp[k]<0? 0: dp[k]) << "\n";
}
