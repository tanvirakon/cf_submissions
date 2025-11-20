// In the name of Allah the most beneficent the most merciful - sūrat l-naml(27:30)
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nn cout << endl
#define vc vector<int>
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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    f0(n)
    {
        if (s[i] == '1')
            sum++;
        else
            flag++;
    }
    if (k == 0 and sum == flag)
    {
        yes;
        return;
    }
    else if (k != 0 and (abs((sum / 2) - (flag / 2)) == k))
        yes;
    else if (k != 0 and (sum == k and flag == k and sum > 1))
        yes;
    else
        no;
}
int32_t main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
        solve();
}
