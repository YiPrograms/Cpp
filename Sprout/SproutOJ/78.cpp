#include <bits/stdc++.h>
using namespace std;

int a[7];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    while (cin >> a[1] >> a[2] >> a[3] >> a[4] >> a[5] >> a[6]) {
        if (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]==0) break;
        int ans=a[6]+a[5]+a[4]+a[3]/4;
        a[3]%=4;
        int twoc=a[4]*5, onec=a[5]*11;
        switch (a[3]) {
            case 1:
                ans++;
                twoc+=5;
                onec+=7;
                break;
            case 2:
                ans++;
                twoc+=3;
                onec+=6;
                break;
            case 3:
                ans++;
                twoc+=1;
                onec+=5;
        }
        if (twoc>=a[2]) {
            onec+=(twoc-a[2])*4;
        } else {
            a[2]-=twoc;
            ans+=a[2]/9;
            onec+=(9-a[2]%9)*4;
            if (a[2]%9) ans++;
        }
        if (onec<a[1]) {
            a[1]-=onec;
            ans+=a[1]/36;
            if (a[1]%36) ans++;
        }
        cout << ans << "\n";
    }
}
