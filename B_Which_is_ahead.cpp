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
    int n;
    cin >> n;
    vector<int> a(n);
    f0(n)
    {
        cin >> a[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        for (auto i : a)
        {
            if (i == l)
            {
                cout << i << endl;
                break;
            }
            else if(i==r){
                cout << i << endl;
                break;
            }
        }
    }
}
int32_t main()
{
    fast();
    int sum = 0, flag = 0;
    solve();
}
