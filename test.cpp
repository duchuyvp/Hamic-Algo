#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    freopen("input.txt", "r", stdin);

    long long int n;
    cin >> n;
    vector<long long int> a(n);
    while (n--)
    {
        cin >> a[n];
    }
    sort(a.begin(), a.end());
    long long int median = 0;
    n = a.size();
    if (n % 2 == 0)
    {
        median = min(a[n / 2], a[n / 2 + 1]);
    }
    else
    {
        median = a[n / 2];
    }

    long long int res = 0;
    for (int i = 0; i < n; i++)
    {
        res += abs(median - a[i]);
    }
    cout << res << endl;
}
