#include <iostream>
#include <algorithm>
using namespace std;

const int INF=1e9;
int a[105];
int dp[105];

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    dp[0]=1;
    for (int i=1; i<n; i++) {
        int res=1;
        for (int j=0; j<i; j++) {
            if (a[i]>a[j]) res=max(res, dp[j]+1);
        }
        dp[i]=res;
    }
    cout << *max_element(dp, dp+n) <<"\n";
}
