n = input()
p = list(map(int, input().split()))
m = p[0]
ans = len(p)
for i in p[1:]:
    m = min(m, i)
    if i > m:
        ans -= 1

print(ans)
