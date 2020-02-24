n, r = map(int, input().split())

if 10 > n:
    r += 100 * (10 - n)
print(r)
