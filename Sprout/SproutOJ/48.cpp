#include <bits/stdc++.h>
using namespace std;

struct node {
    int value;
    node *lc=NULL, *rc=NULL;
};

int a[2005], n=0, now=0;

void make_tree(node* root, int par) {
    root->value=a[now++];
    if (now<n && a[now]<root->value) {
        node* l=new node;
        root->lc=l;
        make_tree(l, root->value);
    }
    if (now<n && a[now]>root->value && a[now]<par) {
        node* r=new node;
        root->rc=r;
        make_tree(r, par);
    }
}

void postorder(node* n) {
    if (n->lc) postorder(n->lc);
    if (n->rc) postorder(n->rc);
    cout << n->value << "\n";
}

int main(){
    int k;
    for (n=0; cin >> k; n++) a[n]=k;
    node* root=new node;
    make_tree(root, 1e9);
    postorder(root);
}
