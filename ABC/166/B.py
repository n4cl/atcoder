n, k = map(int, input().split())
t = set()
for i in range(k):
    d = input()
    a = input().split()
    for j in a:
        t.add(j)

print(n - len(t))
