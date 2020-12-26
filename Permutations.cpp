#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    bool tru = true;
    int m = n / 2;
    int i = m + 1;
    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    if (m <= 1)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    int c = 0;
    while (c < n)
    {
        cout << i << " ";
        c++;
        if (tru)
            i = i - m;
        else
            i = i + m + 1;
        tru = !tru;
    }

    return 0;
}