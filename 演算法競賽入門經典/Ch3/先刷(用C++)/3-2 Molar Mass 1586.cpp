#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main() {
    map<char,float> mass;
    mass['C']=12.01;
    mass['H']=1.008;
    mass['O']=16.00;
    mass['N']=14.01;
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        float sum=0.0;
        for (int i=0; i<s.length(); i++) {
            char c=s[i];
            int n=0;
            for (int j=1; i+j<s.length(); j++) {
                if (s[i+j]>='0' && s[i+j]<='9') {
                    n= n*10 + s[i+j]-'0';
                } else break;
            }
            if (n==0) n=1;
            sum+=mass[c]*n;
        }
        printf("%.3f\n", sum);
    }
}
