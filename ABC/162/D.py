n = int(input())
s = input()
r = 0
g = 0
b = 0

for c in s:
    if c == "R":
        r += 1
    elif c == "G":
        g += 1
    elif c == "B":
        b += 1

sub = 0
for i in range(n):
    for j in range(i+1, n):
        k = j * 2 - i
        if k >= n:
            continue
        if s[i] != s[j] and s[i] != s[k] and s[j] != s[k]:
            sub += 1

print(r*g*b-sub)
