#include <iostream>

using namespace std;

int main() {
    int N;
    while (cin >> N) {
        int nums[N],M;
        for (int i=0; i<N; i++) cin >> nums[i];
        cin >> M;
        int small=0,big=0;
        for (int i=0; i<N; i++) {
            if (nums[i] > M) big++;
            else if (nums[i] < M) small++;
        }
        cout << big << " " << small <<endl;
    }
}
