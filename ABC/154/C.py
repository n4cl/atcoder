n = input()
a = list(map(int, input().split()))
d = {}
for i in a:
    if i in d:
        d[i] += 1
    else:
        d[i] = 1
ans = "YES"
for i in d.values():
    if i > 1:
        ans = "NO"

print(ans)
