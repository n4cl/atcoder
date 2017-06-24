# coding: utf-8

n = input()
a = [input() for _ in xrange(n)]
i = 1
c = 0

while True:
    a[i-1], i = 0, a[i-1]
    c += 1

    if i == 2:
        print c
        exit()

    if a[i-1] == 0:
        print -1
        exit()
