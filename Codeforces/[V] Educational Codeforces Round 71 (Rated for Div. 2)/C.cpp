#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        long long ans=0;
        v.clear();
        string s;
        cin >> s;
        int now=1;
        for (int i=1; i<s.length(); i++) {
            if (s[i]==s[i-1]) {
                now++;
                continue;
            }
            v.emplace_back(now);
            now=1;
        }
        v.emplace_back(now);

        for (int i:v) cout << i << " ";


        if (v.size()==1) {
            ans=(v[0]+1)*b+v[0]*a;
        } else {
            ans=s.length()*a;
            for (int i=0; i<v.size(); i++) {
                if (i&1) {
                    ans+=v[i]*b*2;
                    if (v[i+1]<=1 || (i+1<v.size()-1 && a*2>v[i+1]*b-b)) {
                        ans+=b*2+v[i+1]*b*2;
                        i++;
                    } else {
                        ans+=a+b;
                    }
                } else {
                    if (i==v.size()-1) {
                        ans+=(v[i]+1)*b;
                    } else {
                        ans+=v[i]*b;
                        ans+=a;
                    }
                }
            }
        }
        cout << ans << "\n";
    }
}
