n = int(input())
a_n = list(map(int, input().split()))
ans = 0
for i in range(2*n-2):
    if a_n[i] == a_n[i+2]:
        ans += 1
print(ans)
