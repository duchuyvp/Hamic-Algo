#include <iostream>
#include <vector>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long int mod = 1e9 + 7;

    int n, x;
    cin >> n >> x;
    int coin[n];
    for (int i = 0; i < n; i++)
    {
        cin >> coin[i];
    }
    vector<long long int> dp(x + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i - coin[j] >= 0)
                dp[i] = (dp[i] + dp[i - coin[j]]) % mod;
        }
    }
    cout << dp[x] << endl;
}