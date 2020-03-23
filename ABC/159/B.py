h, w = map(int, input().split())

if h == 1 or w == 1:
    print(1)
    exit()

if h % 2 == 0 or w % 2 == 0:
    ans = h * w // 2
else:
    ans = h * w // 2 + 1

print(ans)
