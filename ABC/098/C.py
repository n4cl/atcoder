n = int(input())
s = input()
e = [0] * (n + 1)
w = [0] * (n + 1)

for i in range(len(s)):
    if s[i] == "E":
        e[i+1] = e[i] + 1
        w[i+1] = w[i]
    else:
        w[i+1] = w[i] + 1
        e[i+1] = e[i]

ans = 10 ** 9
for i in range(0, n+1):
    t = w[i] + e[n] - e[i]
    ans = min(ans, t)

print(ans)
