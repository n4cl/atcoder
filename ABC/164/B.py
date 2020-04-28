a, b, c, d = map(int, input().split())

while True:
    c -= b
    if c <= 0:
        ans = "Yes"
        break
    a -= d
    if a <= 0:
        ans = "No"
        break

print(ans)
