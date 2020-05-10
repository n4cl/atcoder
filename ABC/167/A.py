s = input()
t = input()

l = len(s)
ans = "No"
if s == t[:l]:
    ans = "Yes"

print(ans)
