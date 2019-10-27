#include <bits/stdc++.h>
using namespace std;

int b_length = 0;
bool nodes_has_father[100005] = {0};
////int sigma_height = 0;
long long sigma_height = 0;

vector<int> nodes[100005];

////int dfs(vector<int> n) {
int dfs(int n) {
    vector<int>::iterator iter;
    int my_height = -1;
    int h = -1;
////for(iter = n.begin(); iter != n.end(); iter++) {
    for(iter = nodes[n].begin(); iter != nodes[n].end(); iter++) {
    ////my_height = dfs(nodes[*iter]);
        my_height = dfs(*iter);
        h = max(my_height, h);
        sigma_height += my_height;
    }
    return h + 1;
}

int main() {
    int l;
    cin >> l;
    for (int i = 1; i <= l; i++) {
        int c;
        cin >> c;
        for (int j = 0; j < c; j++) {
            int nid;
            cin >> nid;
            nodes_has_father[nid] = 1;
            nodes[i].push_back(nid);
        }
    }

    // linear search
    int root_id = 0;
    for(int i = 1; i <= l; i++) {
        if(!nodes_has_father[i]) {
            root_id = i;
            break;
        }
    }
////int tmp = dfs(nodes[root_id]);
    int tmp = dfs(root_id);
    sigma_height += tmp;
////cout << root_id << "\n" << sigma_height;
    cout << root_id << "\n" << sigma_height << "\n";
}
