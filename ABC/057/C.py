n = int(input())
ans = 10 ** 10
i = 1
while i * i <= n:
    if n % i == 0:
        ans = min(ans, max(len(str(i)) ,len(str(n // i))))
    i += 1
print(ans)
