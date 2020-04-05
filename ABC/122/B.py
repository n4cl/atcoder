s = input()
_s = {"A", "C", "G", "T"}
t = 0
ans = 0
for i in s:
    if i in _s:
        t += 1
        ans = max(ans, t)
    else:
        t = 0

print(ans)
