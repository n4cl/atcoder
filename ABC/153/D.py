h = int(input())

ans = 1
bit = 1

while True:
    if h == 1:
        break
    h = int(h / 2)
    bit = bit << 1
    ans += bit

print(ans)
