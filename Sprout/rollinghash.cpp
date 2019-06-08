#include <bits/stdc++.h>
using namespace std;

vector<string> has[1000008]; 
const int M=1000007;

int main() {
    for (int i=0; i<26; i++) {cout << i << "\n";for (int j=0; j<26; j++) for (int k=0; k<26; k++) for (int a=0; a<26; a++) for (int b=0; b<26; b++){ //for (int c=0; c<26; c++){
        int h=((b+a*26+k*26*26+j*26*26*26)%M+i*26*26*26*26)%M;//+c*26*26*26*26*26)%M;
        string s;
        s+=(char)(i+'a');
        s+=(char)(j+'a');
        s+=(char)(k+'a');
        s+=(char)(a+'a');
        s+=(char)(b+'a');
        //s+=(char)(c+'a');
        
        has[h].emplace_back(s);
    }}
    for (int i=0; i<M; i++) if (has[i].size()>=3) {
        cout << i << " ";
        for (string s:has[i]) cout << s << " ";
        cout << "\n";
    }
}
