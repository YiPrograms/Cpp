#include <iostream>
#include <algorithm>
using namespace std;

int dp[105];
int coin[6]={1, 5, 10, 12, 16, 20};

int main() {
    int N;
    cin >> N;
    dp[0]=0;
    for (int i=1; i<=N; i++) {
        int res=100000;
        bool found=false;
        for (int j=0; j<6; j++) {
            if (i<coin[j]) continue;
            if (dp[i-coin[j]]<0) continue;
            res=min(res, dp[i-coin[j]]+1);
            found=true;
        }
        dp[i]=found? res: -1;
    }
    cout << dp[N] << "\n";
}
