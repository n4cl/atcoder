# coding: utf-8

seat = [0] * 100000
n = input()
for _ in xrange(n):
    l, r = map(int, raw_input().split())
    for j in xrange(l-1, r):
        seat[j] = 1

print seat.count(1)
