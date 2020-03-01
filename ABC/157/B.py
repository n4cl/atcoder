a = []
for _ in range(3):
    a.append(list(map(int, input().split())))

n = int(input())

for _ in range(n):
    b = int(input())
    for j in range(3):
        for k in range(3):
            if a[j][k] == b:
                a[j][k] = 0

ans = "No"

for i in range(3):
    c1 = 0
    c2 = 0
    for j in range(3):
        if a[i][j] == 0:
            c1 += 1
        if a[j][i] == 0:
            c2 += 1
    if c1 == 3 or c2 == 3:
        ans = "Yes"

if a[0][0] == 0 and a[1][1] == 0 and a[2][2] == 0: ans = "Yes"
if a[0][2] == 0 and a[1][1] == 0 and a[2][0] == 0: ans = "Yes"

print(ans)
