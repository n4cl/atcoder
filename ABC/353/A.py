n = int(input())
h = list(map(int, input().split()))
ans = -1
max_h = h[0]
for i in range(1, n):
    if h[i] > max_h:
        ans = i + 1
        break
print(ans)
