# coding: utf-8

from collections import Counter

n, m = map(int, raw_input().split())
q = [flatten for i in range(0, m) for flatten in raw_input().split()]

counter = Counter(q)
for word, cnt in counter.most_common():
    if cnt % 2 != 0:
        print "NO"
        exit()

print "YES"
