q = int(input())
l = []
for _ in range(q):
    n, x = map(int, input().split())
    if n == 1:
        l.append(x)
    else:
        print(l[-x])
