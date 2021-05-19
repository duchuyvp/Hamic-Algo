#include <iostream>
#include <vector>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
long long int mod = 1e9 + 7;
long long int dp[1000001];

int main(int argc, char const *argv[])
{
    vector<int> coin = {1, 2, 3, 4, 5, 6};
    dp[0] = 1;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int x : coin)
        {
            if (i - x >= 0)
                dp[i] = (dp[i] + dp[i - x]) % mod;
        }
    }
    cout << dp[n] << endl;
}