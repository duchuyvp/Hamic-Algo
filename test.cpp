#include <bits/stdc++.h>
using namespace std;

#define li long long int

int main(int argc, char const *argv[])
{
    // freopen("input.txt", "r", stdin);

    map<li, li> mp;
    li x, y, n;
    cin >> n;
    while (n--)
    {
        cin >> y >> x;
        mp.insert({x, y});
    }
    while (cin >> n)
    {
        auto it = mp.lower_bound(n);
        if (it == mp.begin())
        {
            cout << it->second << endl;
            continue;
        }
        else if (it == mp.end())
        {
            it--;
            cout << it->second << endl;
            continue;
        }
        else
        {
            auto itt = it--;
            if (n - it->second <= itt->second - n)
                cout << it->second << endl;
            else
                cout << itt->second << endl;
        }
    }
    return 0;
}
