#include <bits/stdc++.h>
using namespace std;

multiset<int> s;

int main() {
    int n, k, m;
    cin >> n >> k >> m;
    long long sum=0;
    int cnt=0;
    for (int i=0; i<n; i++) {
        int a;
        cin >> a;
        s.insert(a);
        sum+=a;
    }
    while (m--) {
        if (cnt<(long long)(k*1LL*s.size()) && (s.size()<=1 || (long double)(sum-*(s.begin()))/(s.size()-1)<(long double)(sum+1)/s.size())) {
            sum++;
            cnt++;
        } else if (s.size()>1) {
            sum-=*(s.begin());
            s.erase(s.begin());
        } else break;
    }
    cout << fixed << setprecision(6) << (long double)(sum)/s.size() << "\n";
}
