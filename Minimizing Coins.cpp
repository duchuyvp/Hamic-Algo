#include <iostream>
#include <vector>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
long long int mod = 1e9 + 7;
long long int dp[1000001];

int main(int argc, char const *argv[])
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    dp[x + 1];
    for (int i = 0; i < x + 1; i++)
    {
        dp[i] = INT32_MAX;
    }
    for (int i = 0; i < n; i++)
    {
        dp[a[i]] = 1;
    }

    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i - a[j] >= 0)
                dp[i] = min(dp[i], dp[i - a[j]] + 1);
        }
    }

    if (dp[x] == INT32_MAX)
        cout << -1 << endl;
    else
        cout << dp[x] << endl;
}