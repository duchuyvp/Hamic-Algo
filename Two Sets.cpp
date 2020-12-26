#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define read freopen("input.txt", "r", stdin)
#define write freopen("output.txt", "w", stdout)

#define pb push_back
#define ll long long
#define ull unsigned long long
#define ld long double
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<pii>
#define mpi map<int, int>
#define si set<int>
#define vt vector
#define getline cout << '\n'
#define all(x) x.begin(), x.end()

#define FOR(i, a, b) for (long long int i = a; (b - i) * (a - i) <= 0 && (b > a ? b != i : b != a); b > a ? i++ : i--)
#define FOREACH(it, m) for (auto it = m.begin(); it != m.end(); it++)
// #define FOREACH(it, m) for (auto it : m)

#define IOS ios_base::sync_with_stdio(false)

#define scanset(s, n) \
    FOR(i, 0, n)      \
    {                 \
        int x;        \
        cin >> x;     \
        s.insert(x);  \
    }

template <class T, size_t size>
// scan array
void scan(T (&array)[size])
{
    for (size_t i = 0; i < size; ++i)
        cin >> array[i];
}
template <class T, size_t size>
// print array
void print(const T (&array)[size])
{
    for (size_t i = 0; i < size; ++i)
        cout << array[i] << " ";
}
template <class T, size_t size>
void println(const T (&array)[size])
{
    print(array);
    cout << endl;
}
template <class T>
// scan vector with size
void scan(T &x)
{
    for (size_t i = 0; i < x.size(); i++)
    {
        cin >> x[i];
    }
}
template <class T>
// print vector
void print(const T &t)
{
    for (size_t i = 0; i < t.size(); i++)
        cout << t[i] << " ";
}
template <class T>
void println(const T &t)
{
    print(t);
    cout << endl;
}
template <class T>
// print vector, map, set, pair ...
void __print_collection(T const &container)
{
    for (auto pos : container)
        cout << pos << " ";
}
int main()
{
    // read;
    long long int n;
    cin >> n;
    if (n % 4 == 0)
    {
        cout << "YES" << endl;
        cout << n / 2 << endl;
        FOR(i, 1, n + 1)
        {
            if (i % 4 == 2 || i % 4 == 3)
                cout << i << " ";
        }
        getline;
        cout << n / 2 << endl;
        FOR(i, 1, n + 1)
        {
            if (i % 4 == 1 || i % 4 == 0)
                cout << i << " ";
        }
    }
    else if (n % 4 == 3)
    {
        cout << "YES" << endl;
        cout << (n - 3) / 2 + 1 << endl;
        FOR(i, 4, n + 1)
        {
            if (i % 4 == 0 || i % 4 == 3)
                cout << i << " ";
        }
        cout << 3 << endl;
        cout << (n - 3) / 2 + 2 << endl;
        FOR(i, 4, n + 1)
        {
            if (i % 4 == 1 || i % 4 == 2)
                cout << i << " ";
        }
        cout << 2 << " " << 1;
    }
    else
        cout << "NO" << endl;
}