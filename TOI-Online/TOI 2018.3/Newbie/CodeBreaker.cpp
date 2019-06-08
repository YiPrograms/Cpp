#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string a,b;
    cin >> a >> b;
    if (a.length()<b.length()) {
        string c=a;
        a=b;
        b=c;
    }
    int diff=a.length()-b.length();
    string ans="";
    int carry=0;
    for (int i=b.length()-1; i>=0; i--) {
        int an=a[i+diff]-'A', bn=b[i]-'A';
        int cn=an+bn+carry;
        carry=0;
        if (cn>25) {
            carry=1;
            cn-=26;
        }
        ans = (char)(cn+'A') + ans;
    }
    for (int i=diff-1; i>=0; i--,diff--) {
        if (!carry) break;
        int cn=a[i]-'A'+carry;
        carry=0;
        if (cn>25) {
            carry=1;
            cn-=26;
        }
        ans = (char)(cn+'A') + ans;
    }
    for (int i=diff-1; i>=0; i--,diff--) {
        ans = a[i] + ans;
    }
    cout << ans << "\n";
}
