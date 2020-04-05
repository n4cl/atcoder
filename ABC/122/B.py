s = input()
_s = {"A", "C", "G", "T"}
t = 0
ans = 0
for i in s:
    if i in _s:
        t += 1
    else:
        ans = max(ans, t)
        t = 0

ans = max(ans, t)

print(ans)
