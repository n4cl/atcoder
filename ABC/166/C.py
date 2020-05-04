n, m = map(int, input().split())
h = list(map(int, input().split()))

f = [0] * 10 ** 5
c = {}
for i in range(m):
    a, b = map(int, input().split())
    if b < a:
        a, b = b, a
    if a not in c:
        c[a] = [b]
    else:
        c[a].append(b)


for k, v in c.items():

    for i in v:
        if h[k-1] < h[i-1]:
            f[k-1] = 1
        elif h[k-1] > h[i-1]:
            f[i-1] = 1
        else:
            f[k-1] = 1
            f[i-1] = 1

ans = 0
for i in range(n):
    if f[i] == 0:
        ans += 1

print(ans)
