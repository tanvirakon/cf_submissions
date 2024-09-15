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
bool check(vector<int> a, int n, int mid, int k)
{
    int sum = 0, flag = 0;
    f0(n) sum += max(flag, (mid - a[i]));
    // debug(sum);
    if (sum > k)
        return false;
    return true;
}
void solve()
{
    int sum = 0, flag = 0;
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    f0(n) cin >> a[i];
    int lo = 0, hi = 1e12;
    bool found = 0;
    int cnt=0;
    int ans=lo;
    while (lo <= hi)
    {
        // if(cnt++>20)break;
        
        // int mid = (lo + hi) / 2;
        int mid = lo + ((hi - lo) / 2);
        // int mid = (lo + hi + 1) / 2;
        // cout<<"lo="<<lo<<" hi="<<hi<<" mid="<<mid<<endl;
        if (check(a, n, mid, k))
        {
            ans=mid;
            lo = mid+1;
        }
        else
        {
            hi = mid - 1;
        }
       
    }
    sum = n * (ans - 1) + 1;
    f0(n)
    {
        if (a[i] > ans)
            sum++;
        else
            k -= (ans - a[i]);
    }
    cout << sum + k << endl;
}
int32_t main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
        solve();
}
