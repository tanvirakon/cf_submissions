// In the name of Allah the most beneficent the most merciful - sūrat l-naml(27:30)
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'
#define nn 1e7 + 5
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
void solve()
{
    int sum = 0, flag = 0, ans = 0;
    int n;
    string s;
    cin >> n >> s;
    int m = 0, p = 0, a = 0, i = 0, e = 0;
    if (n < 3)
    {
        cout << 0 << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] != 'm' or s[i] != 'a' or s[i] != 'p' or s[i] != 'i' or s[i] != 'e')
        {
            sum += min(m, min(a, min(p, min(i, e))));
            m = 0;
            p = 0;
            a = 0;
            i = 0;
            e = 0;
        }
        else if (s[i] == 'm' and m == 0)
            m = 1;
        else if (s[i] == 'm' and m != 1)
            m++;
        else if (m != 0 and s[i] == 'a' and a == 0)
            a = 1;
        else if (m != 0 and s[i] == 'a' and a == 1)
            a++;
        else if (m != 0 and a != 0 and s[i] == 'p' and p == 0)
            p = 1;
        else if (m != 0 and a != 0 and s[i] == 'p' and p == 1)
            p++;
    }
    cout << sum << endl;
}
int32_t main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
