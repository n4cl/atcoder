# coding: utf-8

n = input()
a = map(int, raw_input().split())
rate = [0] * 9

for i in xrange(n):
    if a[i] <= 399:
        rate[0] = 1
    elif a[i] <= 799:
        rate[1] = 1
    elif a[i] <= 1199:
        rate[2] = 1
    elif a[i] <= 1599:
        rate[3] = 1
    elif a[i] <= 1999:
        rate[4] = 1
    elif a[i] <= 2399:
        rate[5] = 1
    elif a[i] <= 2799:
        rate[6] = 1
    elif a[i] <= 3199:
        rate[7] = 1
    else:
        rate[8] += 1

if 1 in rate[:8]:
    print sum(rate[:8]), sum(rate)
else:
    print 1, sum(rate)
