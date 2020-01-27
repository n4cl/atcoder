n, k = map(int, input().split())
h = list(map(int, input().split()))
h = sorted(h, reverse=True)
ans = 0

for i in h:
    if k > 0:
        k -= 1
    else:
        ans += i

print(ans)
