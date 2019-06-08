#include <bits/stdc++.h>
using namespace std;

int h[300005];

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++) cin >> h[i];
    int ans=0;
    int last=0;
    for (int i=0; i<n; i++) {
        int j=i+1;
        if (h[i]>h[i-1]) {
            ans+=last-i;
            j=last;
        }
        for (; j<n; j++) {
            if (h[i]>=h[j]) ans++;
        }
    }
    cout << ans << "\n";
}



