# coding: utf-8

n, a, b = map(int, raw_input().split())

if a > b:
    print 0
    exit()

if n == 1:
    if a == b:
        print 1
    else:
        print 0
    exit()

print (n - 2) * (b - a) + 1
