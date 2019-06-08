#include <bits/stdc++.h>
using namespace std;

const int M=1000007;

int main() {
    string s;
    while (cin >> s) {
        int res=0;
        int k=1;
        for (int i=s.length()-1; i>=0;  i--) {
            res+=(s[i]-'a')*k%M;
            k=(k*1LL*26%M);
            res%=M;
        }
        cout << res << "\n";
    }
}
