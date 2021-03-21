#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long int n;
    cin >> n;
    vector<long long int> a(n);
    while (n--)
    {
        cin >> a[n];
    }
    sort(a.begin(), a.end());
    long long int median = 0;
    long long int median2 = 0;
    n = a.size();
    if (n % 2 == 0)
    {
        median = min(a[n / 2], a[n / 2 + 1]);
    }
    else
    {
        median = a[n / 2];
    }
    median2 = median + 1;
    long long int res = 0, res2 = 0;
    for (int i = 0; i < n; i++)
    {
        res += abs(median - a[i]);
        res2 += abs(median2 - a[i]);
    }
    cout << min(res, res2);
}