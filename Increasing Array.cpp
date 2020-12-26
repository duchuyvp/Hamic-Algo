#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    unsigned long long int n;
    cin >> n;
    vector<unsigned long long int> a(n);
    for (unsigned long long int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    unsigned long long int c = 0;
    for (unsigned long long int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            c += a[i - 1] - a[i];
            a[i] = a[i - 1];
        }
    }
    cout << c;
    return 0;
}