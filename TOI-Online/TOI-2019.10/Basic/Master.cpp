#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s;
    cin >> n >> s;
    int id=-1, ans=-1;
    for (int i=1; i<=n; i++) {
        int cp, iv;
        cin >> cp >> iv;
        if (iv<30) cp += s/1000*10;
        else if (iv<40) cp += s/1000*50;
        else cp += s/1000*100;
        if (cp>ans) {
            id=i;
            ans=cp;
        }
    }
    cout << id << " " << ans << "\n";
}
