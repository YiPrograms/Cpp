#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int toint(string num)
{
    int res = 0;
    bool isneg = false;
    if(num[0] == '-')
    {
        num.erase(num.begin());
        isneg = true;
    }
    for (int i=0; i<num.length(); i++)
    {
        res += num[i] - '0';
        res *= 10;
    }
    res /= 10;
    if (isneg) res *= -1;
    return res;
}

string tostr(int num)
{
    bool isneg = false;
    if (num < 0)
    {
        num *= -1;
        isneg = true;
    }
    string res = "";
    while (num > 0)
    {
        res = (char)(num % 10 + '0') + res;
        num /= 10;
    }
    if (isneg) res = '-' + res;
    return res;
}

int calc(vector<string> math)
{
    int i = 1;
    while (i < math.size()-1)
    {
        switch (math.at(i)[0])
        {
        case '*':
            int mres;
            mres = toint(math.at(i-1)) * toint(math.at(i+1));
            math.erase(math.begin()+i-1, math.begin()+i+2);
            math.insert(math.begin()+i-1, tostr(mres));
            break;
        case '/':
            int dres;
            dres = toint(math.at(i-1)) / toint(math.at(i+1));
            math.erase(math.begin()+i-1, math.begin()+i+2);
            math.insert(math.begin()+i-1, tostr(dres));
            break;
        case '%':
            int pres;
            pres = toint(math.at(i-1)) % toint(math.at(i+1));
            math.erase(math.begin()+i-1, math.begin()+i+2);
            math.insert(math.begin()+i-1, tostr(pres));
            break;
        default:
            i += 2;
        }
    }
    i = 1;
    while (i < math.size()-1)
    {
        switch (math.at(i)[0])
        {
        case '+':
            int pres;
            pres = toint(math.at(i-1)) + toint(math.at(i+1));
            math.erase(math.begin()+i-1, math.begin()+i+2);
            math.insert(math.begin()+i-1, tostr(pres));
            break;
        case '-':
            int mres;
            mres = toint(math.at(i-1)) - toint(math.at(i+1));
            math.erase(math.begin()+i-1, math.begin()+i+2);
            math.insert(math.begin()+i-1, tostr(mres));
            break;
        default:
            i += 2;
        }
    }
    return toint(math.at(0));
}

int main()
{
	string oneline;
	while (getline(cin, oneline))
        {
		istringstream line(oneline);
		vector<string> math;
		string elem;
		while (line >> elem) math.push_back(elem);
        while (find(math.begin(), math.end(), "(") != math.end())
        {
            int frontb,backb;
            for (int i=0; i<math.size(); i++)
            {
                if (math.at(i) == "(")
                {
                    frontb = i;
                } else if (math.at(i) == ")")
                {
                    backb = i;
                    break;
                }
            }
            vector<string> inside;
            inside.assign(math.begin()+frontb+1, math.begin()+backb);
            string insideres =tostr(calc(inside));
            math.erase(math.begin()+frontb, math.begin()+backb+1);
            math.insert(math.begin()+frontb, insideres);
        }
        cout << calc(math) << endl;
	}
}
