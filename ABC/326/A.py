x, y = map(int, input().split())

if x < y:
    if y - x > 2:
        ans = "No"
    else:
        ans = "Yes"
else:
    if x - y > 3:
        ans = "No"
    else:
        ans = "Yes"
print(ans)
