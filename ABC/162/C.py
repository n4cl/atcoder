import math
n = int(input())
ans = 0
t = [math.gcd(i, j) for i in range(1, n+1) for j in range(1, n+1)]

for i in t:
    for j in range(1, n+1):
        ans += math.gcd(i, j)

print(ans)
