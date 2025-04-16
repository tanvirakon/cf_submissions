// In the name of Allah the most beneficent the most merciful - sūrat l-naml(27:30)
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'
#define nn 1000000007
#define ff first
#define ss second
#define YES cout << "YES\n"
#define NO cout << "-1\n"
#define f0(n) for (int i = 0; i < n; i++)
#define f1(n) for (int i = 1; i < n; i++)
#define all(_a) _a.begin(), _a.end()
#define debug(x) cerr << (#x) << " " << (x) << endl
#define CheckBit(x, k) (x & (1LL << k))
#define fast()                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }

void solve()
{
    int sum = 0, flag = 0, one = 0, zero = 0;
    int n;
    cin >> n;
    int i = 0;
    while (n != 1)
    {
        if (n & 1 == 1)
            one++;
        else
            zero++;
        sum += pow(2, i);
        i++;
        n = n >> 1;
    }

    if (one > 0 and zero > 0)
        cout << sum << endl;
    else
        NO;
}
int32_t main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
        solve();
}
