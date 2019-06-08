#include <iostream>
using namespace std;

bool isLeapYear(int year)
{
    if (year%400==0) return true;
    if (year%100==0) return false;
    return (year%4==0);
}

int main() {
    int daysPerMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n, y, m, d;
    cin >> n >> m >> d >> y;

}
