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
        cout << t[i] << " ";
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

int main(int argc, char const *argv[])
{

    // read;
    long long int n;
    cin >> n;
    vector<vector<long long int>> v;
    for (int i = 0; i < n; i++)
    {
        vector<long long int> tx(3);
        vector<long long int> ty(3);
        cin >> tx[0] >> ty[0];
        tx[1] = 0;
        ty[1] = 1;
        tx[2] = i;
        ty[2] = i;
        v.push_back(tx);
        v.push_back(ty);
    }
    sort(v.begin(), v.end());
    long long int c = 0;
    long long int ans[n];
    vector<int> av;
    for (auto e : v)
    {
        if (e[1] == 0)
        { //entry
            c++;
            if (av.empty())
                ans[e[2]] = c;
            else
            {
                ans[e[2]] = av.back();
                av.pop_back();
            }
        }
        else
        {
            c--;
            av.push_back(ans[e[2]]);
        }
    }
    cout << *max_element(ans, ans + n) << endl;
    for (int i = 0; i < n; i++)
        cout << (ans[i]) << " ";

    return 0;
}