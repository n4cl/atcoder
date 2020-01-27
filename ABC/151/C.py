import sys
input = sys.stdin.readline

n, m = map(int, input().split())
ac = {str(i): 0 for i in range(n+1)}
wa = {str(i): 0 for i in range(n+1)}
ok = 0
ng = 0

for _ in range(m):
    p, s = input().split()
    if ac[p] == 0:
        if s == "AC":
            ac[p] += 1
            ok += 1
            if wa[p] > 0:
                ng += wa[p]
        else:
            wa[p] += 1

print(ok, ng)
