s = input()
ans = set()

for i in range(len(s)):
    for j in range(len(s)):
        ans.add(s[j:j+i+1])
print(len(ans))
