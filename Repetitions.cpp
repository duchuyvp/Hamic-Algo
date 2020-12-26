#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a;
    cin >> a;
    vector<int> b;
    b.push_back(1);
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] == a[i - 1])
            b.push_back(b[b.size() - 1] + 1);
        else
            b.push_back(1);
    }
    int m = b[0];
    for (int i = 1; i < b.size(); i++)
    {
        m = max(m, b[i]);
    }
    cout << m;
    return 0;
}