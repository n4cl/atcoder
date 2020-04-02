n = int(input())
s = input()
w = "ABC"
ans = 0
for i in range(n-2):
    if s[i:i+3] == w:
        ans += 1
print(ans)
