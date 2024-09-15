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
double log_base(double a, double b)
{
    double low = 0, high = a, mid;
    double epsilon = 1e-10; // Precision level

    while (high - low > epsilon)
    {
        mid = (low + high) / 2;
        if (pow(b, mid) < a)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }
    return mid;
}
void solve()
{
    int sum = 0, flag = 0;
    int a = 150;
    int b = 3;
    cout << (a/10);
}
int32_t main()
{
    fast();
    solve();
}
