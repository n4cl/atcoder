def comb(n, a):
    x = 1
    y = 1
    for i in range(a):
        x = x * (n - i) % mod
        y = y * (i + 1) % mod
    return x * pow(y, mod-2, mod) % mod

n, a, b = map(int, input().split())
mod = 10 ** 9 + 7

ans = pow(2, n, mod)
ans -= 1
ans -= comb(n, a)
ans -= comb(n, b)

print(ans % mod)

