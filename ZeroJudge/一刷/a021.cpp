#include <iostream>
using namespace std;

string mutli(string num1, string num2)
{
    string result="";
    if (num1.length() < num2.length()) {
        string tmp = num1;
            num1 = num2;
            num2 = tmp;
        }
    string levels[num2.length()]={""};
    for (int l=0; l<num2.length(); l++)
    {
        int add=0;
        for (int i=num1.length()-1; i>=0; i--)
        {
            int res = (num1[i] - '0') * (num2[num2.length()-l-1] - '0') + add;
            levels[l] = (char)(res%10 + '0') + levels[l];
            add = res/10;
        }
        levels[l] = (char)(add + '0') + levels[l];
    }
    for (int i=0; i<num2.length(); i++)
    {
        for (int a=0; a<i; a++)
        {
            levels[i] += '0';
        }
        for (int a=0; a<num2.length()-1-i; a++)
        {
            levels[i] = '0' + levels[i];
        }
    }
    string ans="";
    int add = 0;
    for (int i=levels[0].length()-1; i>=0; i--)
    {
        int res = 0;
        for (int a=0; a<num2.length(); a++)
        {
            res += levels[a][i] - '0';
        }
        res += add;
        ans = (char)(res%10 + '0') + ans;
        add = res / 10;
    }
    ans = (char)(add + '0') + ans;
    bool stillzero = true;
    for (int i=0; i<ans.length(); i++)
    {
        if (!(ans[i] == '0' && stillzero))
        {
            result += ans[i];
            stillzero = false;
        }
    }
    if (stillzero) result = "0";
    return result;
}


string add(string num1, string num2)
{
    int res[500];
    string result = "";
    if (num1.length() < num2.length()) {
        string tmp = num1;
        num1 = num2;
        num2 = tmp;
    }
    int add = 0;
    int dlen = num1.length() - num2.length();
    int sav = 0;
    for (int i=num1.length()-1; i>=0; i--) {
        int b = 0;
        if (i - dlen >= 0) {
            b = num2[i-dlen] - '0';
        }
        int added = num1[i] - '0' + b + add;
        res[sav] = added % 10;
        add = added / 10;
        sav++;
    }
    if (add != 0) {
        result += add + '0';
    }
    for (int i=num1.length()-1; i>=0; i--) {
        result += res[i] + '0';
    }
    return result;
}

int compare(string num1, string num2)
{
    int out = 1;
    if (num1 == num2) {
        out = 0;
    } else if (num1.length() < num2.length()) {
        out = -1;
    } else if (num1.length() == num2.length()){
        for (int i=0; i<num1.length(); i++) {
            if (num2[i] - '0' > num1[i] - '0') {
                out = -1;
                break;
            }
        }
    }
    return out;
}

string minu(string num1, string num2)
{
    int res[500];
    string result = "";
    switch (compare(num1, num2))
    {
    case 0:
        return "0";
        break;
    case -1:
        string tmp = num1;
        num1 = num2;
        num2 = tmp;
        result += '-';
    }
    int x1[num1.length()], x2[num2.length()];
    for (int i=0; i<num1.length(); i++) {
        x1[i] = num1[i] - '0';
    }
    for (int i=0; i<num2.length(); i++) {
        x2[i] = num2[i] - '0';
    }
    int dlen = num1.length() - num2.length();
    int sav = 0;
    for (int i=num1.length()-1; i>=0; i--) {
        int a = x1[i], b = 0;
        if (i - dlen >= 0) {
            b = x2[i-dlen];
        }
        if (a < b) {
            x1[i-1]--;
            a += 10;
        }
        res[sav] = a - b;
        sav++;
        }
    bool stillzero = true;
    for (int i=num1.length()-1; i>=0; i--) {
        if (!(res[i] == 0 && stillzero)) {
            result += res[i] + '0';
            stillzero = false;
        }
    }
    leave:;
    return result;
}

int main() {
	string num1, num2;
	char symbol;
	while (cin >> num1 >> symbol >> num2) {
		if (symbol == '+') {
			cout << add(num1, num2) << endl;
		} else if (symbol == '-') {
			cout << minu(num1, num2) << endl;
		} else if (symbol == '*') {
            cout << mutli(num1, num2) << endl;
        } else if (symbol == '/')
        {

        }
	}
}
