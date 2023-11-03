n = int(input())

for i in range(n, 920):
    t = [None] * 3
    tmp = i
    for j in range(2, -1, -1):
        t[j] = tmp % 10
        tmp //= 10
    if (t[0] * t[1]) == t[2]:
        ans = i
        break
print(ans)
