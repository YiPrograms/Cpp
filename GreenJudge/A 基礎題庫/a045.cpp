#include <iostream>

using namespace std;

int main() {
    int N;
    while (cin >> N) {
        bool isprime=true;
        if (N!=2) {
            if (N%2==0) {
                isprime=false;
            } else {
                for (int i=3; i*i<=N; i+=2) {
                    if (N%i==0){
                        isprime=false;
                        break;
                    }
                }
            }
        }
        if (isprime) cout << "YES"; else cout << "NO";
        cout << endl;
    }
}
