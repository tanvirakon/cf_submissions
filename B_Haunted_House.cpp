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
    int n;
    string s;
    cin >> n >> s;
    sum = n - 1;
    vector<int> ans;
    for (int i = n - 1; i >= 0; i--)
        if (s[i] == '0')
        {
            ans.push_back(sum - i);
            sum--;
        }
    f1(ans.size()) ans[i] += ans[i - 1];
    for (auto i : ans)
        cout << i << " ";
    for (int i = ans.size(); i < n; i++)
        cout << -1 << " ";
    cout << endl;
}
int32_t main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
        solve();
}