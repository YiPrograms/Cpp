#include <bits/stdc++.h>
using namespace std;

string a[]={"¨¯","¤Ð","¬Ñ","¥Ò","¤A","¤þ","¤B","¥³","¤v","©°"},
     b[]={"¥è","¤l","¤¡","±G","¥f","¨°","¤x","¤È","¥¼","¥Ó","¨»","¦¦"};

int main() {
    int y;
    cin >> y;
    y-=1911;
    cout << y << " " << a[y%10] << b[y%12] << "\n";
}
