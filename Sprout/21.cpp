#include <bits/stdc++.h>
using namespace std;

struct car {
    int id;
    car *next, *prev;
    car(int i) {
        id=i;
    }
    car(int i, car* n) {
        id=i;
        next=n;
    }
};

car *a[int(1e5)+5];

int main() {
    int n, m;
    cin >> n >> m;
    car root(0);
    a[0]=&root;
    for (int i=1;i<=n; i++) {
        new car c(i, a[i-1]);
        a[i-1]->prev=&c;
    }
    while (m--) {
        int t, x;
        cin >> t >> x;
        car &c=*(a[x]);
        if (t==0) {
           c.next->prev=c.prev;
           c.prev->next=c.next;
        } else {
            swap(c.id, c.next->id);
        }
    }
    car* c=&root;
    while (c->prev) {
        c=c->prev;
        cout << c->id << " ";
    }
    cout << "\n";
}
