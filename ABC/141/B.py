s = input()
ans = "Yes"
for i in range(1, len(s)+1):
    if i % 2 == 0:
        if "R" == s[i-1]:
            ans = "No"
    else:
        if "L" == s[i-1]:
            ans = "No"
print(ans)
