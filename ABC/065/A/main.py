# coding: utf-8

x, a, b = map(int, raw_input().split())

t = a - b

if t >= 0:
    print "delicious"
    exit()

if x+1 > -t:
    print "safe"
else:
    print "dangerous"
