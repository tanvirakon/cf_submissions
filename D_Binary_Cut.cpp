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
    int sum = 0, flag = 0;
    string s;
    cin >> s;
    int n = s.size();
    int i = 0, j = n - 1;
    while (i < n)
    {
        if (s[i] == '0')
        {
            sum++;
            while (i < n and s[i] == '0')
            {
                i++;
            }
            if (i != n)
                flag = 1;
        }
        else
        {
            sum++;
            while (i < n and s[i] == '1')
            {
                i++;
            }
        }
        // debug(sum);
        // debug(i);
    }
    if (flag)
        sum--;
    cout << sum << endl;
}
int32_t main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
        solve();
}
