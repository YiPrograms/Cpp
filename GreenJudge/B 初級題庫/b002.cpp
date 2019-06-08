#include <iostream>

using namespace std;

int main() {
    int N;
    while (cin >> N) {
        int nums[N];
        for (int i=0; i<N; i++) cin >> nums[i];
        int maxnum=0, maxindex;
        for (int i=0; i<N; i++) {
            if (nums[i] > maxnum) {
                maxnum=nums[i];
                maxindex=i+1;
            }
        }
        cout << maxindex << " " << maxnum << endl;
    }
}
