n, k = map(int, input().split())
a = map(int, input().split())
ans = []
for i in a:
    if i % k == 0:
        ans.append(i//k)
print(" ".join(map(str, ans)))
