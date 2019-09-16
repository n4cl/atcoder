n, k, q = map(int, input().split())
nn = [0] * n
for a in range(q):
    nn[int(input())-1] += 1

x = 1 - k + q

for i in nn:
    if i >= x:
        print("Yes")
    else:
        print("No")
