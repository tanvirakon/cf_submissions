import math

def solve():
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    aa = list(0 for _ in range(0, (2 * n) + 2))
    bb = list(0 for _ in range(0, (2 * n) + 2))
    sum = 1
    for i in range(1, len(a)):
        if a[i] == a[i - 1]:
            sum += 1
        else:
            if aa[a[i - 1]] < sum:
                aa[a[i - 1]] = sum
            sum = 1
    if aa[a[n - 1]] < sum:
        aa[a[n - 1]] = sum
    sum = 1

    for i in range(1, len(b)):
        if b[i] == b[i - 1]:
            sum += 1
        else:
            if bb[b[i - 1]] < sum:
                bb[b[i - 1]] = sum
            sum = 1
    if bb[b[n - 1]] < sum:
        bb[b[n - 1]] = sum

    sum = 0

    for i in range(0, len(aa)):
        flag = aa[i] + bb[i]
        if flag > sum:
            sum = flag
    print(sum)

t = int(input())
for _ in range(t):
    solve()
