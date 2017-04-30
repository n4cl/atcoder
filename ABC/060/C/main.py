# coding: utf-8

n, t = map(int, raw_input().split())
ti_list = map(int, raw_input().split())
ti = ti_list.pop(0)
total = t

for ti_plus1 in ti_list:
    total += min(ti_plus1-ti, t)
    ti = ti_plus1

print total
