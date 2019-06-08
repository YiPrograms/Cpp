#include <iostream>
#include <cstdio>
using namespace std;
char puz[5][5];

int main() {
    char first;
    int c=0;
    while ((first=getchar()) !='Z') {
        string line;
        getline(cin, line);
        line = first + line;
        int bi,bj;
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                puz[i][j] = line[j];
                cout << j << " " << line[j] << "\n";
                if (line[j] == ' ') {
                    bi=i;
                    bj=j;
                }
            }
            if (i!=4) getline(cin, line);
        }
        cout << bi << " " << bj << "\n";
        string op="";
        char in;
        while ((in=getchar()) !='0') if (in>='A' && in <='R') op+=in;
        cout << "Puzzle #" << ++c << ":\n" << op << "\n";
        bool il=false;
        for (int o=0; o<op.length(); o++) {
            int ni=bi,nj=bj;
            switch (op[o]) {
            case 'A':
                ni--;
                break;
            case 'B':
                ni++;
                break;
            case 'L':
                nj--;
                break;
            case 'R':
                nj++;
            }
        cout << ni << " " << nj << "\n";
            if (ni>=0 && ni<5 && nj>=0 && nj<5) {
                puz[bi][bj] = puz[ni][nj];
                puz[ni][nj] = ' ';
                bi=ni;
                bj=nj;
            } else {
                il=true;
                break;
            }
        }
        if (!il) {
            for (int i=0; i<5; i++) {
                for (int j=0; j<5; j++) {
                    if (j!=0) cout << " ";
                    cout << puz[i][j];
                }
                cout << "\n";
            }
        } else {
            cout << "This puzzle has no final configuration.\n";
        }
        cout << "\n";
    }
}
