#include <bits/stdc++.h>
using namespace std;

string a[]={"��","��","��","��","�A","��","�B","��","�v","��"},
     b[]={"��","�l","��","�G","�f","��","�x","��","��","��","��","��"};

int main() {
    int y;
    cin >> y;
    y-=1911;
    cout << y << " " << a[y%10] << b[y%12] << "\n";
}
