#include <bits/stdc++.h>
using namespace std;

const int maxn=100005;

long double a[maxn];
int n, q;
int p[4];

void init() {
    for (int i=0; i<n; i++) {
        a[i]=1000000.0/n;

    }
}

struct node {
    int sum;
} arr[maxn*4];

node pull(node x, node y) {
    node tmp;
    tmp.sum=x.sum+y.sum;
    return tmp;
}

void build(int L, int R, int id) {
    if (L==R) {
        arr[id].sum=
    }
}

int main() {

}
