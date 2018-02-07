# coding: utf-8

from collections import Counter

n, m = map(int, raw_input().split())
f = [int(flatten) for _ in range(m) for flatten in raw_input().split()]
c = Counter(f)

for i in range(1, n+1):
    if i in c:
        print c[i]
    else:
        print 0