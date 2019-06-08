#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int s[n];
    for (int i=0; i<n; i++) {
        cin >> s[i];
        if (s[i]>0) s[i]=0;
    }
    for (int i=n-1; i>=0; i--) cout << s[i] << "\n";
}
