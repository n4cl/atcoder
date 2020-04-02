
def f(t, _ans, length):
    for _ in range(length):
        t += length
        _ans += 1

        if t >= n:
            print(_ans)
            exit()

    return _ans

h = int(input())
w = int(input())
n = int(input())
t = 0
ans = 0

if h > w:
    f1, f2 = h, w
else:
    f1, f2 = w, h

ans = f(t, ans, f1)
f(t, ans, f2)
