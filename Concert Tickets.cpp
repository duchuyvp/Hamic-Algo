#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n, m;
    cin >> n >> m;
    vector<long long int> a(n);
    long long int t;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    while (m--)
    {
        cin >> t;
        auto it = upper_bound(a.begin(), a.end(), t);
        if (it == a.begin())
        {
            cout << -1 << endl;
        }
        else
        {
            it--;
            cout << *it << endl;
            a.erase(it);
        }
    }

    return 0;
}
