# coding: utf-8
from collections import Counter

s = raw_input()
c = Counter(s)

for i in c.values():
    if i > 1:
        print "no"
        exit()

print "yes"
