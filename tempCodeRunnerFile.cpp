#include <bits/stdc++.h>
using namespace std;

map<long long int, long long int> dp;

long long int fuc(long long int x, long long int y)
{
    if (y == 1)
        return abs(x - y);
    map<long long int, long long int>::iterator it;
    if ((it = dp.find(y)) != dp.end())
        return it->second;

    long long int ans = abs(x - y);

    if (y % 2)
    {
        ans = min(ans, fuc(x, (y - 1) / 2) + 2);
        ans = min(ans, fuc(x, (y + 1) / 2) + 2);
    }
    else
    {
        ans = min(ans, fuc(x, y / 2) + 1);
    }
    return dp[y] = ans;
}

int main()
{
    long long int X, Y;
    cin >> X >> Y;
    cout << fuc(X, Y);
}