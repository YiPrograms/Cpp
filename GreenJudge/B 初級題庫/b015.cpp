#include <iostream>
#include <sstream>

using namespace std;

int main() {
    for (int i=0; i<3; i++) {
        bool found=false;
        string s;
        getline(cin,s);
        stringstream ss;
        ss << s;
        int scount=0;
        string bill;
        while (ss >> bill) {
            scount++;
            if (bill=="BILL") {
                found=true;
                cout << i+1 << " " << scount;
                break;
            }
        }
        if (found) break;
        else if (i==2) cout << "NO";
    }
}
