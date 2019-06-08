#include <bits/stdc++.h>
using namespace std;

struct node {
    node *next=NULL, *prev=NULL;
    int l, r;
    node() {
        l=r=0;
    }
};


node* getmin(node* root, node* now) {
    if (root->l + root->r < now->l + now->r) now=root;
    if (root->next) return getmin(root->next, now);
    return now;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        node* root=new node;
        node* now=root;
        int ai;
        cin >> ai;
        now->l=ai;
        for (int i=1; i<n; i++) {
            cin >> ai;
            now->r=ai;
            if (i==n-1) break;
            now->next=new node;
            now->next->prev=now;
            now=now->next;
            now->l=ai;
        }
        int ans=0;
        for (int i=0; i<n-2; i++) {
            node* m=getmin(root, root);
            int res=m->l+m->r;
            ans+=res;
            if (m==root) {
                root=m->next;
                root->l=res;
                root->prev=NULL;
                delete m;
            } else if (m->next) {
                m->next->prev=m->prev;
                m->prev->next=m->next;
                m->next->l=res;
                m->prev->r=res;
                delete m;
            } else {
                m->prev->r=res;
                m->prev->next=NULL;
                delete m;
            }
        }
        cout << ans+root->l+root->r << "\n";
        delete root;
    }
}
