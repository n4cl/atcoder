# coding: utf-8

n, k = map(int, raw_input().split())
l = map(int, raw_input().split())

l.sort()
print sum(l[-k:])