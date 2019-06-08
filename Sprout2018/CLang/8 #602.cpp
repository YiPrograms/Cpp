#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int g[n], avg=0;
    for (int i=0; i<n; i++) {
        cin >> g[i];
        avg+=g[i];
    }
    avg/=n;
    int sum=0;
    for (int i=0; i<n; i++) if (g[i]<avg) sum+=g[i];
    cout << sum;
}
