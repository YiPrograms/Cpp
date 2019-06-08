#include <bits/stdc++.h>
using namespace std;

long long a[200005];

int main() {
    int n=4;
    int  bs[2];
    for (int ak=0; ak<1000; ak++) for (int b=ak; b<1000; b++) for (int c=b; c<1000; c++) for (int d=c; d<1000; d++) {
        bs[0]=ak+d;
        bs[1]=b+c;
        int now=0, last=0;
        for (int i=0; i<n/2; i++) {
        long long b=bs[i];
        if (i==0) last=b;
        if (b-now>last) {
            now=b-last;
        } else {
            last=b-now;
        }
        a[i]=now;
        a[n-i-1]=last;
        }
        bool pass=true;
        for (int i=0; i<n/2; i++) {
            if (a[i]+a[n-i-1]!=bs[i]) {
                pass=false;
                break;
            }
            if (i!=0 && a[i]<a[i-1]) {
                pass=false;
                break;
            }
            if (n-i-1+1<n && a[n-i-1]>a[n-i-1+1]) {
                pass=false;
                break;
            }
        }
        if (!pass) {
            cout << ak << " " << b << " " << c << " " << d << "\n";
            for (int i=0; i<n; i++) cout << a[i] << " ";
            cout <<"\n" << bs[0] << " " << bs[1];
            cout << "\n\n";
        }
    }
}
