#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, t;
    cin >> n;
    long long int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        a[i] = 0;
    }
    for (int i = 1; i <= n - 1; i++)
    {
        cin >> t;
        a[t]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 0)
        {
            cout << i;
            break;
        }
    }

    return 0;
}