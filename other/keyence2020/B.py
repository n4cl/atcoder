import sys

input = sys.stdin.readline
p = []
n = int(input())
for _ in range(n):
    x, l = map(int, input().split())
    p.append([x-l, x+l])

r = sorted(p, key=lambda x: x[1])

ans = 0
cur = - (1<<60)

for i in r:
    if cur > i[0]:
        continue
    ans += 1
    cur = i[1]

print(ans)
