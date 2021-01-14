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
#define FOREACHR(it, m) for (auto it = m.rbegin(); it != m.rend(); it++)
#define FOREACH(it, m) for (auto it = m.begin(); it != m.end(); it++)
// #define FOREACH(it, m) for (auto it : m)

// #define IOS ios_base::sync_with_stdio(false)

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
        cout << t[i] << endl;
}
template <class T>
void println(const T &t)
{
    print(t);
    cout << endl;
}
template <class T>
// print vector, set, ...
void __print_collection(T const &container)
{
    for (auto pos : container)
        cout << pos << " ";
}

void __print_pair(pair<int, int> p)
{
    cout << p.first << " " << p.second << "\n";
}

string next_string(string s)
{
    bool b = false;
    int i = s.size() - 1;
    while (i >= 0)
    {
        if (s[i] != '9')
        {
            s[i]++;
            b = true;
            break;
        }
        i--;
    }
    if (b)
        return s;
    else
    {
        string a = "1";
        for (int i = 0; i < s.size(); i++)
        {
            a += "0";
        }
        return a;
    }
}

unsigned long long int p(unsigned long long int n, unsigned long long int m)
{
    if (m == 1)
        return n;
    return n * p(n, m - 1);
}
int main()
{
    // read;
    // write;
    string s = "";
    unsigned long long int n;
    cin >> n;
    unsigned long long int x;
    unsigned long long int y;
    unsigned long long int z;
    unsigned long long int t;
    while (n--)
    {
        x = 9;
        y = 1;
        z = 0;
        cin >> t;
        while (t > z + x * y)
        {
            z += x * y;
            x *= 10;
            y++;
        }
        t -= z;
        if (t % y)
        {
            s = to_string(p(10, y - 1) + t / y);
            cout << s[t % y - 1] << endl;
            continue;
        }
        else
        {
            if (y == 1)
                s = to_string(0 + t / y);
            else
                s = to_string(p(10, y - 1) + t / y - 1);
            cout << s[s.size() - 1] << endl;
        }
    }
}