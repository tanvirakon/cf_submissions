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

void solve()
{
    int sum = 0, flag = 0;
    string s;
    cin >> s;
    int n = s.size();
    f0(n)
    {
        if (s[i] == '1')
            sum++;
        else
            flag++;
    }
    int k = n;
    f0(n)
    {
        if (s[i] == '1')
            flag--;
        else
            sum--;
        if (sum < 0 or flag < 0)
        {
            k = i;
            break;
        }
    }
    cout << n - k << endl;
}
int32_t main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
        solve();
}
