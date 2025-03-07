def solve():
    sum,flag=0,0
    n=int(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    seta=set(a)
    setb=set(b)
    if len(seta)+len(setb) > 3:
        print("YES")
    else:
        print("NO")


t=int(input())
for _ in range(t):
    solve()