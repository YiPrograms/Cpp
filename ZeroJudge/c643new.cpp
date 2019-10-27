#include <bits/stdc++.h>
using namespace std;

/*
9
1 6
3 5 3 8
0
2 1 7
1 9
0
1 2
0
0
*/

int b_length = 0;
bool nodes_has_father[100005] = {0};
long long sigma_height = 0;

map<int, vector<int> > nodes;

int dfs(vector<int> n) {
    vector<int>::iterator iter;
    int my_height = -1;
    int h = -1;
    for(iter = n.begin(); iter != n.end(); iter++) {
        my_height = dfs(nodes[*iter]);
        h = max(my_height, h);
        //h = dfs(*(iter->second));
        //cout <<"#" << iter->second->id << " height: " << my_height <<  endl;
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
        //if(!nodes[i]) {
        //    nodes[i] = {};
        //}
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
    int tmp = dfs(nodes[root_id]);
    sigma_height += tmp;
    cout << root_id << "\n" << sigma_height << "\n";
}
