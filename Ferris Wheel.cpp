#include <bits/stdc++.h>

#define read freopen("input.txt", "r", stdin)
#define write freopen("output.txt", "w", stdout)

using namespace std;

int main()
{
    // read;
    long long int n, m;
    cin >> n >> m;
    long long int t;
    multiset<long long int> a;
    while (n--)
    {
        cin >> t;
        a.insert(t);
    }
    long long int c = 0;
    while (a.size() > 0)
    {
        long long int x = *a.begin();
        a.erase(a.begin());
        auto it = a.upper_bound(m - x);
        if (it != a.begin())
        {
            it--;
            a.erase(it);
        }
        c++;
    }
    cout << c;
}
