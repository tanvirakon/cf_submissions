#include <bits/stdc++.h>
const int mod = 1e9 + 7;
#define ll long long
#define int long long
#define vi vector<int>
#define vl vector<long long>
#define viread(n, v)            \
    for (int i = 0; i < n; i++) \
    {                           \
        int x;                  \
        cin >> x;               \
        v.push_back(x);         \
    }
#define vlread(n, v)           \
    for (ll i = 0; i < n; i++) \
    {                          \
        ll x;                  \
        cin >> x;              \
        v.push_back(x);        \
    }
#define sorta(v) sort(v.begin(), v.end())
#define all(_a) _a.begin(), _a.end()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
using namespace std;
bool exist(vector<ll> &v, ll mid, ll k, ll n)
{
    ll help = 0;
    for (ll i = 0; i < n; i++)
    {
        help += max((ll)0, mid - v[i]);
    }
    if (help <= k)
        return true;
    else
        return false;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vl v;
        vlread(n, v);
        ll l = 0, r = 1e12;
        while (l < r)
        {
            ll mid = (l + r + 1) / 2;
            if (exist(v, mid, k, n))
                l = mid;
            else
                r = mid - 1;
        }
        ll ans = (l - 1) * n + 1;
        
        for (ll i = 0; i < n; i++)
        {
            if (v[i] < l)
                k -= l - v[i];
            if (v[i] > l)
                ans++;
        }
        cout << ans + k << endl;
    }
}