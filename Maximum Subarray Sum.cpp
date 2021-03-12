#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    long long int n;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long int best = INT64_MIN;
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = max(arr[i], sum + arr[i]);
        best = max(sum, best);
    }
    cout << best;
    return 0;
}
