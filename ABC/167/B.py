a, b, c, k = map(int, input().split())
ans = -10 * 10 ** 10

if a > 0:
    if k > a:
        ans = a
        k -= a
    else:
        print(k)
        exit()

if b > 0:
    ans = max(ans, 0)
    if k > b:
        k -= b
    else:
        print(ans)
        exit()

if c > 0:
    ans = max(ans - k, -k)

print(ans)

