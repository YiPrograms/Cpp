#include <bits/stdc++.h>
using namespace std;

bool notprime[100005];
int s[100005];

void makeprime() {
    for (int i=2; i<100005; i++) {
        if (!notprime[i]) {
            for (int j=i*2; j<100005; j+=i) notprime[j]=true;
        }
    }
    for (int i=2; i<100005; i++) {
        if (!notprime[i]) s[i]=s[i-1]+1;
        else s[i]=s[i-1];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    makeprime();
    int n;
    cin >> n;
    while (n--) {
        int a, b;
        cin >> a >> b;
        cout << (notprime[a]? s[b]-s[a] : s[b]-s[a]+1) << "\n";
    }
}
