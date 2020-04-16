#include <bits/stdc++.h>
using namespace std;

const int MAXN=5e5+5;

string S;
int F[MAXN];

void KMP_Build() {
    int p=F[0]=-1;
    for (int i=1; i<int(S.length()); i++) {
        while (p!=-1 && S[p+1]!=S[i]) p=F[p];
        if (S[p+1]==S[i]) p++;
        F[i]=p;
    }
}

int main() {
    cin >> S;
    KMP_Build();
    int ans=S.length()-F[S.length()-1]-1;
    if (S.length()%ans==0) cout << ans << "\n";
    else cout << S.length() << "\n";
}
