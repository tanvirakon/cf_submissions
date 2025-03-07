// In the name of Allah the most beneficent the most merciful - sūrat l-naml(27:30)
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'
#define nn 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define f0(n) for (int i = 0; i < n; i++)
#define f1(n) for (int i = 1; i < n; i++)
#define all(_a) _a.begin(), _a.end()
#define fast()                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }
int32_t main()
{
    fast();
    int sum = 0, flag = 0, ans = 0;
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    f0(n) cin >> a[i];
    if (m == 1)
    {
        sum = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < sum)
            {
                sum = a[i];
                flag = i + 1;
            }
        }
        cout << flag << endl;
    }
    else
    {
        for (int i = 0; i < m; i++)
            sum += a[i];
        ans = sum;
        flag = 0;
        // cerr << ans << endl;
        for (int i = m; i < n; i++)
        {
            ans += a[i];
            ans -= a[i - m];
            // cerr << ans << endl;
            if (ans < sum)
            {
                flag = i;
                // cerr << i << " " << ans << endl;
                sum = ans;
            }
        }
        if (((flag - (m - 1)) + 1) < 1)
            cout << 1 << endl;
        else
            cout << (flag - (m - 1)) + 1 << endl;
    }
}