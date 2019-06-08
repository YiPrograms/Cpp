#include <bits/stdc++.h>
using namespace std;

struct brackets {
    int types;
    int diff;
    int big;
    int mid;
    int small;
    int total;
    int id;
    string br;
};

brackets brs[10005];

bool cmp(const brackets &a, const brackets &b) {
    if (a.types!=b.types) return a.types<b.types;
    if (a.diff!=b.diff) return a.diff<b.diff;
    if (a.total!=b.total) return a.total<b.total;
    if (a.big!=b.big) return a.big<b.big;
    if (a.mid!=b.mid) return a.mid<b.mid;
    if (a.small!=b.small) return a.small<b.small;
    return a.id<b.id;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        for (int i=0; i<N; i++) {
            string S;
            cin >> S;
            int b=0, m=0, s=0, u=0, d=0;
            for (char c:S) {
                switch (c) {
                case '{':
                    b++;
                    u++;
                    break;
                case '[':
                    m++;
                    u++;
                    break;
                case '(':
                    s++;
                    u++;
                    break;
                case '}':
                    b++;
                    d++;
                    break;
                case ']':
                    m++;
                    d++;
                    break;
                case ')':
                    s++;
                    d++;
                }
            }
            brackets br;
            br.big=b;
            br.mid=m;
            br.small=s;
            br.diff=abs(u-d);
            br.types=(b!=0)+(m!=0)+(s!=0);
            br.id=i;
            br.total=S.length();
            br.br=S;
            brs[i]=br;
        }
        sort(brs, brs+N, cmp);
        for (int i=0; i<N; i++) cout << brs[i].br << "\n";
        if (T!=0) cout << "\n";
    }
}
