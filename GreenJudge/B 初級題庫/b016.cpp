#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string A,B;
    while (cin >> A >> B) {
        if (A.length() < B.length()) {
            string C=A;
            A=B;
            B=C;
        }
        int diff=A.length()-B.length();
        string ans="";
        bool p=false;
        for (int i=A.length()-1; i>=0; i--) {
            int sum=0;
            if (i>=diff) {
                sum = A[i]-'0' + B[i-diff]-'0' + p;
            } else {
                sum = A[i]-'0' + p;
            }
            p=false;
            if (sum>=10) {
                p=true;
                sum-=10;
            }
            ans = (char)(sum+'0') + ans;
        }
        if (p) ans = '1' + ans;
        cout << ans << endl;
    }
}
