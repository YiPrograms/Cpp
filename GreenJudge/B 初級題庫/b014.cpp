#include <iostream>
#include <sstream>

using namespace std;

int main() {
    int mostdie=0, mostid;
    for (int i=0; i<3; i++) {
        string s;
        getline(cin,s);
        stringstream ss;
        ss << s;
        int sum=0,n;
        while (ss >> n) sum+=n;
        if (sum>mostdie) {
            mostdie=sum;
            mostid=i+1;
        }
    }
    cout << mostid << " " << mostdie;
}
