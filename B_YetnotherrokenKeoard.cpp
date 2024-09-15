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
    string ans = "";
    int n = s.size();

    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'b')
            sum++;
        else if (s[i] == 'B')
            flag++;
        else
        {
            if (sum >= 1 and s[i] >= 'a' and s[i] <= 'z')
                sum--;
            else if (flag >= 1 and s[i] >= 'A' and s[i] <= 'Z')
                flag--;
            else
                ans += s[i];
        }
    }
    reverse(all(ans));
    cout << ans << endl;
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
