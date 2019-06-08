#include <iostream>
#include <algorithm>
using namespace std;

int a[105];
int dp[105];

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    dp[0]=a[0];
    for (int i=1; i<n; i++) {
        if (dp[i-1]>=0) dp[i]=dp[i-1]+a[i];
        else dp[i]=a[i];
    }
    int prof=*max_element(dp, dp+n);
    cout << (prof>=0? prof: 0) << "\n";
}
