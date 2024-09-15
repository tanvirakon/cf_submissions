#include "bits/stdc++.h"
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, x, y;
        long long sum = 0;
        map<int, map<int, int>> mp;
        scanf("%d%d%d", &n, &x, &y);
        while (n--)
        {
            int a;
            scanf("%d", &a);
            sum += mp[(x - a % x) % x][a % y];
            mp[a % x][a % y]++;
        }
        printf("%lld\n", sum);
    }
    return 0;
}