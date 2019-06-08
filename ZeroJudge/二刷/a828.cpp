#include <iostream>
#include <vector>
using namespace std;

string getnum(int n) {
    int times=n/81 + 3;
    bool last=false;
    if (n % 81 == 0) {
        last=true;
        times--;
    }
    vector<string> numlist;
    numlist.push_back("0");
    for (int i=1; i<=9; i++)
    {
        for (int j=0; j<=9; j++)
        {
            if (i != j)
            {
                string num = "";
                for (int a=0; a<times/2; a++)
                {
                    num += i + '0';
                    num += j + '0';
                }
                if (times % 2 != 0) num += i + '0';
                numlist.push_back(num);
            }
        }
    }
    if (last) return numlist.at(81);
    return numlist.at(n % 81);
}



int main() {
    int n;
    while (cin >> n) {
        cout << getnum(n) << endl;
    }
}
