#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int x, y;
    vector<pair<int, int>> a;
    while (n--)
    {
        cin >> x >> y;
        a.push_back(pair<int, int>(y, x));
    }
    sort(a.begin(), a.end());
    int end = 0;
    int start = 0;
    int c = 0;
    for (auto it : a)
    {
        if (it.second >= end)
        {
            end = it.first;
            c++;
        }
    }
    cout << c;
    return 0;
}
