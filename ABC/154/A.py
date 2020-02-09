s, t = input().split()
a, b = map(int, input().split())
u = input()
m = {}
m[s] = a
m[t] = b

m[u] -= 1

print(m[s], m[t])
