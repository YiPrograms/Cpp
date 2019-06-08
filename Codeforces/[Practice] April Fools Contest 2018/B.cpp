#include <bits/stdc++.h>
using namespace std;

string nor[]={"don't think so", "don't touch me", "great", "not bad", "cool"};

int main() {
    for (int i=0; i<=9; i++) {
        cout << i << endl;
        cout << flush;
        string res;
        getline(cin, res);
        if (res=="no") continue;
        for (int k=0; k<5; k++) {
            if (res==nor[k]) {
                cout << "normal\n";
                return 0;
            }
        }
        cout << "grumpy\n";
        return 0;
    }
}
