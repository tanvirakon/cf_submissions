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
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    int aa[(2 * n) + 2] = {0};
    int bb[(2 * n) + 2] = {0};

    f0(n) cin >> a[i];
    f0(n) cin >> b[i];

    sum = 1;
    f1(n)
    {
        if (a[i] == a[i - 1])
            sum++;
        else
        {
            if (aa[a[i - 1]] < sum)
                aa[a[i - 1]] = sum;
            sum = 1;
        }
    }
    if (aa[a[n - 1]] < sum)
        aa[a[n - 1]] = sum;

    sum = 1;
    f1(n)
    {
        if (b[i] == b[i - 1])
            sum++;
        else
        {
            if (bb[b[i - 1]] < sum)
                bb[b[i - 1]] = sum;
            sum = 1;
        }
    }
    if (bb[b[n - 1]] < sum)
        bb[b[n - 1]] = sum;

    sum = 0;
    for (int i = 0; i < (2 * n) + 2; i++)
    {
        flag = aa[i] + bb[i];
        if (flag > sum)
            sum = flag;
    }

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
