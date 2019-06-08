#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> ans;

int main() {
    int n;
    cin >> n;
    for (int i=1; i<=n-1; i++) {
        for (int j=i+1; j<=n; j++) {
            cout << i << " " << j << endl;
            int d;
            cin >> d;
            if (d==1) ans.emplace_back(i, j);
        }
    }
    cout << "!!\n";
    sort(ans.begin(), ans.end());
    for (pair<int, int> pii:ans) {
        cout << pii.first << " " << pii.second << "\n";
    }
}
