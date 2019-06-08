#include <bits/stdc++.h>
using namespace std;

vector<char> h={'a','b','d','e','o','p','q'};


bool check(char c) { //true=hole, false=normal
    return find(h.begin(), h.end(), c)!=h.end();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;
        auto ir=find(h.begin(), h.end(), s[n-1]);
        int cnt=0;
        if (ir==h.end()) {
            if (s[n-1]!='z'){
                do s[n-1]++; while (check(s[n-1]));
                if (s[n-1]=='g') s[n-1]++;
                cout << s << "\n";
                continue;
            }
        } else {
            cnt++;
            if (s[n-1]!='q') {
                s[n-1]=*(ir+1);
                cout << s << "\n";
                continue;
            }
        }
        bool found=false;
        s[n-1]='c';
        for (int i=n-2; i>=0; i--) {
            if (s[i]=='z') {
                s[i]='c';
                continue;
            }
            bool needshole=false;
            if (check(s[i]) && !check(s[i]+1)) {
                cnt++;
                if (n-1-i<cnt) {
                    if (s[i]=='q') {
                        s[i]='c';
                        continue;
                    }
                    needshole=true;
                }
            }
            found=true;
            if (!check(s[i]) && check(s[i]+1)) {
                if (cnt<1) {
                    do s[i]++; while (check(s[i]));
                } else {
                    cnt--;
                    s[i]++;
                }
            } else  {
                if (needshole) {
                    do s[i]++; while (!check(s[i]));
                } else s[i]++;
            }
            if (s[i]=='g') s[i]++;
            for (int j=1; j<=cnt; j++) s[i+j]='a';
            cout << s << "\n";
            break;
        }
        if (!found) cout << -1 << "\n";
    }
}
