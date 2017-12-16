# coding: utf-8

s = sorted(raw_input())
t = sorted(raw_input(), reverse=True)

print "Yes" if s < t else "No"
