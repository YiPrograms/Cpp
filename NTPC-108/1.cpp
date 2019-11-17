#include <bits/stdc++.h>
using namespace std;

int a[10];

int main() {
    int sum=0;
    for (int i=0; i<10; i++) cin >> a[i], sum+=a[i];
    sum/=4;
    cout << sum << "\n";
    sort(a, a+10);
    int ans[5];
    ans[2]=sum-a[0]-a[9];
    ans[0]=a[1]-ans[2];
    ans[1]=a[0]-ans[0];
    ans[4]=a[8]-ans[2];
    ans[3]=a[9]-ans[4];
    for (int i=0; i<5; i++) cout << ans[i] << " \n"[i==4];
}
