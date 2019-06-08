#include <iostream>
#include <algorithm>
using namespace std;

int a[105], dp[105];

int main() {
    int N;
    cin >> N;
    for (int i=0; i<N; i++) cin >> a[i];
    dp[0]=a[0];
    for (int i=1; i<N; i++) {
        if (dp[i-1]<0) dp[i]=a[i];
        else dp[i]=dp[i-1]+a[i];
    }
    int ans=*max_element(dp, dp+N);
    cout << (ans<0? 0: ans) << "\n";
}
