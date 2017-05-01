# coding: utf-8

a, b, c = map(int, raw_input().split())

l = b - a
r = c - b

if l == r:
    print "YES"
else:
    print "NO"
