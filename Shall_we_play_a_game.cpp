// In the name of Allah the most beneficent the most merciful - sūrat l-naml(27:30)
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'
#define nn 1000000007
#define ff first
#define ss second
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define f0(n) for (int i = 0; i < n; i++)
#define f1(n) for (int i = 1; i < n; i++)
#define all(_a) _a.begin(), _a.end()
#define debug(x) cerr << (#x) << " " << (x) << endl
#define fast()                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }

// Modular exponentiation function (equivalent to Python's pow(base, exp, mod))
int modpow(int base, int exp, int mod)
{
    int res = 1;
    base = base % mod;
    while (exp > 0)
    {
        if (exp & 1)
            res = (res * base) % mod;
        exp = exp >> 1;
        base = (base * base) % mod;
    }
    return res;
}

void solve()
{
    int n, k = 998244353;
    cin >> n;
    if (n & 1)
        cout << modpow(2, n - 1, k) << endl;
    else
        cout << (modpow(2, n - 1, k) + modpow(2, n - 2, k)) % k << endl;
}

int32_t main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
        solve();
}