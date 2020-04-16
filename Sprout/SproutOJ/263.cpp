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
    int p=S.length()-1;
    while (F[p]!=-1) p=p-F[p]-1;
    int i=0;
    while (i+p+1<int(S.length()) && S[i]==S[i+p+1]) i++;
    cout << p+1+i%(p+1) << "\n";
}

