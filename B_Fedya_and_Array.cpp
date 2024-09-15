#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        cout << 2 * abs(x - y) << endl;
        for (ll i = x; i >= y; i--)
            cout << i << " ";
        for (ll i = y + 1; i < x; i++)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}