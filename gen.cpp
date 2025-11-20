#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(_a) _a.begin(), _a.end()

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
inline ll gen_random(ll l, ll r) { return uniform_int_distribution<ll>(l, r)(rng); }
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("in.txt", "w", stdout);
    // start
    int n = gen_random(1, 100);
    cout << n << endl;

    for (int i = 0; i < n; i++)
    {
        cout << gen_random(1, 100) << " ";
    }

    cout << endl;
}