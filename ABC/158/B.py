n, blue, red = map(int, input().split())

s = n // (blue + red)
a = n % (blue + red)

ans = 0
if blue > 0:
    if blue > a:
        ans += a
    else:
        ans += blue

print(ans + s * blue)
