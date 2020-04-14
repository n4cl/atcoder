n = int(input())
ans = 10 ** 5
for i in range(1, 10**5+1):
    if n % i == 0:
        ans = min(ans, max(len(str(i)) ,len(str(n // i))))
print(ans)
