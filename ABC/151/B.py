n, k, m = map(int, input().split())
a = list(map(int, input().split()))

an = m * n - sum(a)
av = sum(a) / n
if av >= m:
    ans = 0
elif an > k:
    ans = -1
else:
    ans = an

print(ans)
