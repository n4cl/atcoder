h, a = map(int, input().split())

ans = int(h / a)
if h % a > 0: ans += 1

print(ans)
