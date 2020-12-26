#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int t;
    cin >> t;
    long long int y, x;
    while (t--)
    {
        cin >> y >> x;
        if (x > y)
        {
            long long int X = 0;
            if (x % 2 == 1)
            {
                X = x * x;
                cout << X - (y - 1) << endl;
            }
            else
            {
                X = (x - 1) * (x - 1) + 1;
                cout << X + (y - 1) << endl;
            }
        }
        else
        {
            long long int Y = 0;
            if (y % 2 == 0)
            {
                Y = y * y;
                cout << Y - (x - 1) << endl;
            }
            else
            {
                Y = (y - 1) * (y - 1) + 1;
                cout << Y + (x - 1) << endl;
            }
        }
    }

    return 0;
}