#include <iostream>
#include <vector>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

void balance(multiset<long long int> &l, multiset<long long int> &r, int k)
{
    while (l.size() > k / 2 + k % 2)
    {
        auto it = l.end();
        it--;
        r.insert(*it);
        l.erase(it);
    }
    while (r.size() > k / 2)
    {
        l.insert(*r.begin());
        r.erase(r.begin());
    }
}

int main(int argc, char const *argv[])
{
    // freopen("input.txt", "r", stdin);
    int n, k;
    cin >> n >> k;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    multiset<long long int> l;
    multiset<long long int> r;

    for (int i = 0; i < k - 1; i++)
    {
        l.insert(a[i]);
    }

    for (int i = k - 1; i < n; i++)
    {
        if (i - k >= 0)
        {
            if (!l.empty() && a[i - k] > *l.rbegin())
            {
                r.erase(r.lower_bound(a[i - k]));
            }
            else
            {
                l.erase(l.lower_bound(a[i - k]));
            }
        }
        if (l.empty())
        {
            r.insert(a[i]);
        }
        else if (a[i] > *l.rbegin())
        {
            r.insert(a[i]);
        }
        else
        {
            l.insert(a[i]);
        }
        balance(l, r, k);

        cout << *l.rbegin() << " ";
    }
}