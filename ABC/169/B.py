n = int(input())
a = list(map(int, input().split()))

for i in a:
    if i == 0:
        print(0)
        exit()

ans = 1
for i in a:
    ans *= i
    if ans > 10**18:
        ans = -1
        break

print(ans)
