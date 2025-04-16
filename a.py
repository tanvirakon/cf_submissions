import math

def solve():
    k=998244353
    n=int(input())
    if n & 1:
        print(pow(2,n-1,k))
    else:
        print((pow(2,n-1,k)+pow(2,n-2,k))%k)

t = int(input())
for _ in range(t):
    solve()
