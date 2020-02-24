n, k = map(int, input().split())
ans = 0
while True:
    n = n // k
    ans += 1
    if n == 0:
        break

print(ans)
