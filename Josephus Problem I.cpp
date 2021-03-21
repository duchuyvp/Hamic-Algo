#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        a[i] = 1;
    }
    int c = 0;
    int i = 1;
    int d = 0;
    while (d < n)
    {
        if (i > n)
            i = 1;
        if (a[i] == 1)
            c++;
        if (c == 2)
        {
            a[i] = 0;
            cout << i << " ";
            c = 0;
            d++;
        }
        i++;
    }

    return 0;
}