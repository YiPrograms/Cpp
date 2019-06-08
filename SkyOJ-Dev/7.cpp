#include <bits/stdc++.h>
using namespace std;
map<char, int> sea1= {{'N', 1}, {'T', 5}, {'H', 10}, {'U', 50}, {'S', 100}, {'E', 500}, {'A', 1000}, {'C', 5000}, {'O', 10000}, {'W', 50000}};
map <string, int> sea2= {{"NT", 4}, {"NH", 9}, {"HU", 40}, {"HS", 90}, {"SE", 400}, {"SA", 900}, {"AC", 4000}, {"AO", 9000}, {"OW", 40000}};
pair<string,int> sean[] = {{"N", 1}, {"NT", 4}, {"T", 5}, {"NH", 9}, {"H", 10}, {"HU", 40}, {"U", 50}, {"HS", 90}, {"S", 100},
{"SE", 400}, {"E", 500}, {"SA", 900}, {"A", 1000}, {"AC", 4000}, {"C", 5000}, {"AO", 9000}, {"O", 10000}, {"OW", 40000}, {"W", 50000}};

int sea2int(string sea) {
    int ans=0;
    for (int i=0; i<(int)sea.length(); i++) {
        string ss;
        ss+=sea[i];
        if (i<=(int)sea.length()-2 && sea2[ss+=sea[i+1]]!=0) {
            ans+=sea2[ss];
            i++;
        } else {
            ans+=sea1[sea[i]];
        }
    }
    return ans;
}

string int2sea(int n) {
    string ans;
    for (int i=18; i>=0; i--) {
        while (n>=sean[i].second) {
            n-=sean[i].second;
            ans+=sean[i].first;
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string Ns;
    cin >> Ns;
    int N=sea2int(Ns);
    for (int i=1; i<=N; i++) {
        string A, B;
        cin >> A >> B;
        int C=sea2int(A)+sea2int(B);
        cout << "Case " << int2sea(i) << ": " << int2sea(C) << "\n";
    }
}
