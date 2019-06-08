#include <iostream>

using namespace std;

int main() {
    int i,j;
    while (cin >> i >> j) {
            cout << i << " " << j << " ";
        int maxc=0;
        if (i>j) {
            int k=i;
            i=j;
            j=k;
        }
        for (int a=i; a<=j; a++) {
            int c=1,n=a;
            while (n!=1) {
                if (n%2) n=3*n+1;
                else n/=2;
                c++;
            }
            if (c>maxc) maxc=c;
        }
        cout << maxc << endl;
    }
}
