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
#define read(_a, _n)              \
    for (auto i = 0; i < _n; i++) \
        cin >> _a[i];
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
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n);
        vector<int> b(m);
        map<int, int> mapa, mapb;
        f0(n)
        {
            cin >> a[i];
            mapa[a[i]]++;
        }
        f0(m)
        {
            cin >> b[i];
            mapb[b[i]]++;
        }
        int one = 0, two = 0;
        for (int i = 1; i <= k; i++)
        {

            if (mapa[i] >= 1 and mapb[i] == 0)
            {
                one++;
            }
            else if (mapb[i] >= 1 and mapa[i] == 0)
                two++;
            if ((mapa[i] == 0 and mapb[i] == 0) or (one > (k / 2) or two > (k / 2)))
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            NO;
        else
            YES;
    }
}
