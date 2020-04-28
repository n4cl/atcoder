s, w = map(int, input().split())

if s <= w:
    ans = "unsafe"
else:
    ans = "safe"

print(ans)
