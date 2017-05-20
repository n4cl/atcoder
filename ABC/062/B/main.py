# coding: utf-8

h, w = map(int, raw_input().split())

pic = [["#" for _j in xrange(w+2)] for _i in xrange(h+2)]

for i in xrange(h):
    aij = raw_input()

    for j in xrange(len(aij)):
        pic[i+1][j+1] = aij[j]

for p in pic:
    print "".join(p)
