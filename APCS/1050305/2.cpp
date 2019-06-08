#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int r,c,m;
    while (cin >> r >> c >> m) {
        int a[r][c];
        for (int i=0; i<r; i++) {
            for (int j=0; j<c; j++) {
                cin >> a[i][j];
            }
        }
        int d=0, o[m];
        for (int i=0; i<m; i++) cin >> o[i];
        for (int k=m-1; k>=0; k--) {
            if (o[k]==0) {
                d++;
                if (d==4) d=0;
            } else {
                if (d==1 || d==3) {
                    for (int i=0; i<c/2; i++) {
                        for (int j=0; j<r; j++) {
                            int tmp=a[j][i];
                            a[j][i] = a[j][c-i-1];
                            a[j][c-i-1]=tmp;
                        }
                    }
                } else {
                    for (int i=0; i<r/2; i++) {
                        int tmp[c];
                        memcpy(tmp, a[i], c*sizeof(int));
                        memcpy(a[i], a[r-i-1], c*sizeof(int));
                        memcpy(a[r-i-1], tmp, c*sizeof(int));
                    }
                }
            }
        }
        switch (d) {
        case 0:
            cout << r << " " << c << "\n";
            for (int i=0; i<r; i++) {
                for (int j=0; j<c; j++) {
                    if (j!=0) cout << " ";
                    cout << a[i][j];
                }
                cout << "\n";
            }
            break;
        case 1:
            cout << c << " " << r << "\n";
            for (int i=c-1; i>=0; i--) {
                for (int j=0; j<r; j++) {
                    if (j!=0) cout << " ";
                    cout << a[j][i];
                }
                cout << "\n";
            }
            break;
        case 2:
            cout << r << " " << c << "\n";
            for (int i=r-1; i>=0; i--) {
                for (int j=c-1; j>=0; j--) {
                    if (j!=c-1) cout << " ";
                    cout << a[i][j];
                }
                cout << "\n";
            }
            break;
        case 3:
            cout << c << " " << r << "\n";
            for (int i=0; i<c; i++) {
                for (int j=r-1; j>=0; j--) {
                    if (j!=r-1) cout << " ";
                    cout << a[j][i];
                }
                cout << "\n";
            }
        }
    }
}
