n, k = map(int, input().split())
p = list(map(int, input().split()))
s = [0] * (n+1)

for i in range(0, n):
    s[i+1] = s[i] + p[i]

s_max = -1
pos = 0
for i in range(n-k+1):
    ss = s[i+k] - s[i]
    if ss > s_max:
        s_max = ss
        pos = i

ans = 0.0
for i in range(pos, pos+k):
    ans += (p[i]+1) / 2

print(ans)
