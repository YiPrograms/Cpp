#include <bits/stdc++.h>
using namespace std;



int main() { for (int n=2; n<=20; n++) {
    //int n;
    //cin >> n;
    vector<int> ans;
    cout << n << " : ";
    for (int k=0; k<=n/2; k++) {
        int i=1+k, fun=i;
        while (i!=1) {
            i+=k;
            if (i>n) i-=n;
            fun+=i;
        }
        ans.emplace_back(fun);
    }
    //sort(ans.begin(), ans.end());
    //auto ir=unique(ans.begin(), ans.end());
    auto ir=ans.end();
    for (auto i=ans.begin(); i<ir; i++) cout << *i << " ";
    cout << "\n"; }
}
