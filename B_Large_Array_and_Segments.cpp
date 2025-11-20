// In the name of Allah the most beneficent the most merciful - sūrat l-naml(27:30)
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'
#define yes cout << "YES\n"
#define no cout << "0\n"
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
    int n, k, x;
    cin >> n >> k >> x;
    vc a(n);
    f0(n)
    {
        cin >> a[i];
        sum += a[i];
    }
    if ((sum * k) < x)
    {
        no;
        return;
    }
    flag = floor(x / (sum * 1.0));
    int rem = x % sum;
    int add = 0;
    if (!rem)
        add++;
    int ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] >= rem)
        {
            ans = i;
            break;
        }
        else
        {
            a[i - 1] += a[i];
        }
    }
    ans++;
    int bad = n - ans;
    int netbad = (flag * n) + bad;
    cout << (n * k) - netbad + add << endl;
}
int32_t main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
        solve();
}
