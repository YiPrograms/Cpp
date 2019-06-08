#include <bits/stdc++.h>
using namespace std;

char seql[]={'[',':'}, seqr[]={']',':'};

int main() {
    string s;
    cin >> s;
    int l=-1, r=-1;
    int now=0;
    for (int i=0; i<s.length(); i++) {
        if (s[i]==seql[now]) {
            if (now==0) now++;
            else {
                l=i;
                break;
            }
        }
    }
    now=0;
    for (int i=s.length()-1; i>=0; i--) {
        if (s[i]==seqr[now]) {
            if (now==0) now++;
            else {
                r=i;
                break;
            }
        }
    }
    int ans=4;
    if (l==-1 || r==-1 || l>=r) cout << -1 << "\n";
    else {
        for (int i=l+1; i<=r-1; i++) {
            if (s[i]=='|') ans++;
        }
        cout << ans << "\n";
    }

}
