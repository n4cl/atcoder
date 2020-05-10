def combinationListRecursive(data, r):
  result = []
  _combinationListRecursive(data, r, 0, [], result)
  return result

def _combinationListRecursive(data, r, start, progress, result):
  if r == 0:
    result.append(progress)
    return

  for i in range(start, len(data)):
    _combinationListRecursive(data, r - 1, i + 1, progress + [data[i]], result)

n, m, x = map(int, input().split())
t = []
for i in range(n):
    l = list(map(int, input().split()))
    t.append(l)

tmp = []
for i in range(1, n+1):
    c = combinationListRecursive(t, i)
    for j in c:
        cnt = [0] * (m + 1)
        for k in j:
            for l in range(m+1):
                cnt[l] += k[l]
        tmp.append(cnt)

ans = float("INF")
for i in tmp:
    ignore = False
    for j in i[1:]:
        if x > j:
            ignore = True
    if ignore:
        continue

    ans = min(ans, i[0])

if ans == float("INF"):
    ans = -1

print(ans)
