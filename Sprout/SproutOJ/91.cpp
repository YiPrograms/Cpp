#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (n==1) {
            cout << 1 << "\n";
            continue;
        } else if (n==0) {
            cout << 10 << "\n";
            continue;
        }
        int d2=0, d3=0, ans[10]={0};
        while (n%5==0) {
            ans[5]++;
            n/=5;
        }
        while (n%7==0) {
            ans[7]++;
            n/=7;
        }
        while (n%2==0) {
            d2++;
            if (d2>=3) {
                d2=0;
                ans[8]++;
            }
            n/=2;
        }
        while (n%3==0) {
            d3++;
            if (d3>=2) {
                d3=0;
                ans[9]++;
            }
            n/=3;
        }
        if (n!=1) {
            cout << -1 << "\n";
            continue;
        }
        if (d3 && d2) {
            ans[6]++;
            d3--;
            d2--;
        }
        if (d3) ans[3]++;
        if (d2==1) ans[2]++;
        else if (d2==2) ans[4]++;
        for (int i=2; i<=9; i++) {
            while (ans[i]--) cout << i;
        }
        cout << "\n";
    }
}
