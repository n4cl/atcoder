# coding: utf-8

l = 10 ** 5
num = [0] * (l + 1)
n, k = map(int, raw_input().split())

for _ in xrange(n):
    a, b = map(int, raw_input().split())
    num[a] += b

for i in xrange(1, l+1):
    k -= num[i]
    if k <= 0:
        print i
        break
