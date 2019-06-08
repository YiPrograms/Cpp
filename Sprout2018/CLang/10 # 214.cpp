#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int bomb[n][m], coun[n][m];
    for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> bomb[i][j];
    for (int i=0; i<n; i++) {
       for (int j=0; j<m; j++) {
            int sum=0;
            for (int a=i-1; a<=i+1; a++) {
                for (int b=j-1; b<=j+1; b++) {
                    if (a>=0&&a<n&&b>=0&&b<m && !(a==i && b==j)) sum+=bomb[a][b];
                }
            }
            coun[i][j]=sum;
       }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (j!=0) cout << " ";
            cout << coun[i][j];
        }
        cout << "\n";
    }
}
