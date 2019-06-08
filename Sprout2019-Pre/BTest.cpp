#include <bits/stdc++.h>
using namespace std;

vector<char> h={'a','b','d','e','o','p','q'};

vector<string> vs;

bool check(char c) { //true=hole, false=normal
    return find(h.begin(), h.end(), c)!=h.end();
}

int main() {
    int z;
    cin >> z;
    for (char a='a'; a<='z'; a++)
        for (char b='a'; b<='z'; b++)
            for (char c='a'; c<='z'; c++)
                for (char d='a'; d<='z'; d++)
    for (char e='a'; e<='z'; e++) {
        if (a=='g') continue;
        if (b=='g') continue;
        if (c=='g') continue;
        if (d=='g') continue;
        if (e=='g') continue;
        if (check(a)+check(b)+check(c)+check(d)+check(e)!=z) continue;
        cout << a << b << c << d << e << "\n";
    }
}

