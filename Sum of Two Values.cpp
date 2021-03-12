#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    map<long long int, long long int> a;
    int t;
    for (int i = 1; i <= n; i++)
    {
        cin >> t;

        auto it = a.find(m - t);

        if (it != a.end())
        {
            cout << a[m - t] << " " << i;
            return 0;
        }
        a[t] = i;
    }
    cout << "IMPOSSIBLE";
    return 0;
}
