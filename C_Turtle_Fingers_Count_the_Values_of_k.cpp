#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff first
#define Optimization()       \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);             \
    cerr.tie(0)
#define ss second
#define pb push_back
#define pl pair<ll, ll>
#define vpl vector<pl>
#define fileread(x) freopen(x, "r", stdin)
#define filewrite(x) freopen(x, "w", stdout)
#define read(_a, _n)              \
    for (auto i = 0; i < _n; i++) \
        cin >> _a[i];
#define show(_a)            \
    for (auto &val : _a)    \
    {                       \
        cout << val << " "; \
    }                       \
    cout << endl;
#define all(_a) _a.begin(), _a.end()
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
#define sum(_a) accumulate(all(_a), 0);
#define pi = 2 * acos(0.0);
#define nn '\n'
#define inf 1e7
#define N 200005
#define ok cout << "OK" << nn;
#define Time() cerr << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC;
ll power(ll b, ll p)
{
    ll res = 1;
    for (ll i = 1; i <= p; i++)
    {
        res *= b;
        if (res > inf)
            break;
    }
    return res;
}
int main()
{
    Optimization();
    // fileread("input.txt");
    // filewrite("output.txt");
    ll Cases = 1;
       cin >> Cases;
    for (ll Test = 1; Test <= Cases; Test++)
    {
        // cout << "Case " << Test << ": ";
        ll n, i, m, a, b, l, j, k;
        cin >> a >> b >> l;
        set<ll> st;
        for (k = 1; k<= l; k++)
        {
           // cout << "k=" << k << endl;
            for (ll x = 0; x < 30; x++)
            {
                if ((power(a, x)) > l)
                    break;
                for (ll y = 0; y < 30; y++)
                {
                    if ((power(b, y)) > l)
                        break;
                    ll t1 = (power(a, x));
                    ll t2 = (power(b, y));
                    ll tm = k * t1 * t2;
                    if (tm == l)
                    {
                        //cout<<"k="<<k<<" x="<<x<<" y="<<y<<endl;
                        st.insert(k);
                    }
                }
            }
        }
       cout<<st.size()<<nn;
    }
    return 0;
}
