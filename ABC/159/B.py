s = input()
ll = len(s)
l = ll // 2

ans = True
t = l
if len(s) % 2 != 0:
    t = l - 1

for i in range(0, t):
    if s[i] != s[t-i]:
        ans = False

t = l
if len(s) % 2 != 0:
    t = l + 1

ll -= 1
c = 0
for i in range(t, ll):
    if s[i] != s[ll-c]:
        ans = False
    c += 1

if s[:t-1] != s[t:]:
    ans = False

if ans:
    x = "Yes"
else:
    x = "No"
print(x)

