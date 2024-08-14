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
    string s, t;
    cin >> s >> t;
    int i = 0, j = 0;
    while (i < s.size() and j < t.size())
    {
        if (s[i] == '?' or s[i] == t[j])
        {
            s[i] = t[j];
            j++;
        }
        i++;
    }
    // debug(i);
    // debug(j);
    if (j != t.size())
        NO;
    else
    {
        YES;
        i = 0;
        f0(s.size())
        {
            if (s[i] == '?')
                cout << 'a';
            else
                cout << s[i];
        }
        cout << endl;
    }
}
int32_t main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
        solve();
}
