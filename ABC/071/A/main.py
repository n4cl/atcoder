# coding: utf-8

x, a, b = map(int, raw_input().split())

if abs(x-a) > abs(x-b):
    print "B"
else:
    print "A"
