#include <bits/stdc++.h>
using namespace std;

bool magic[1505];

void initialize(int n) {
    memset(magic, 0, sizeof(magic));
}

int hasEdge(int a, int b) {
    if (magic[a] || magic[b]) return 0;
    else {
        magic[a]=true;
        magic[b]=true;
        return 1;
    }
}

int main() {

}
