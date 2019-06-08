#include <iostream>

using namespace std;

int main() {
    int N;
    while (cin >> N) {
        int nums[N],nc=N;
        while (N--) cin >> nums[N];
        for (int i=0; i<nc; i++) cout << nums[i] << " ";
        cout << endl;
    }
}
