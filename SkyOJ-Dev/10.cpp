/// Problem: 1-2 = 2*1 + 2 = 4 not 3

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        stack<int> num;
        stack<char> op;
        int N;
        cin >> N;
        if (N==0) continue;
        N/=2;
        int n;
        cin >> n;
        num.emplace(n);
        while (N--) {
            char o;
            cin >> o;
            int x, y;
            switch (o) {
            case '*':
                x=num.top();
                cin >> y;
                x = x*(x+y);
                num.pop();
                num.emplace(x);
                break;
            case '/':
                x=num.top();
                cin >> y;
                x = (x+y)*y;
                num.pop();
                num.emplace(x);
                break;
            default:
                if (!op.empty()) {
                    y=num.top();
                    num.pop();
                    x=num.top();
                    num.pop();
                    char c=op.top();
                    op.pop();
                    if (c=='+') {
                        x = x+2*y;
                    } else {
                        x = 2*x+y;
                    }
                    num.emplace(x);
                }
                cin >> y;
                num.emplace(y);
                op.emplace(o);
            }
        }
        if (!op.empty()) {
            int y=num.top(), x;
            num.pop();
            x=num.top();
            num.pop();
            char c=op.top();
            op.pop();
            if (c=='+') {
                x = x+2*y;
            } else {
                x = 2*x+y;
            }
            num.emplace(x);
        }
        cout << num.top() << "\n";
    }
}
