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
int32_t main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
    {
        int sum = 0, flag = 0;
        int n;
        cin >> n;
        vector<int> a(n);
        f0(n) cin >> a[i];
        map<int, int> map;
        vector<pair<int, int>> vp;
        map[a[n - 1]] = n - 1;
        vp.push_back({a[n - 1], -1});
        int j = 0;
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] == a[i + 1])
            {
                vp.push_back({a[i], vp[j].second});
            }
            else
            {
                vp.push_back({a[i], i + 1 + 1});
            }
            j++;
        }
        int q;
        cin >> q;
        reverse(all(vp));
        // for (auto i : vp)
        //     cout << i.first << " " << i.second << endl;
        // cout << endl;
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            if ((l == r) or (vp[l - 1].second == vp[r - 1].second))
                cout << -1 << " " << -1 << endl;
            else if (vp[l - 1].first == vp[r - 1].first)
                cout << l << " " << vp[l - 1].second << endl;
            else
                cout << l << " " << r << endl;
        }
        cout << endl;
    }
}
