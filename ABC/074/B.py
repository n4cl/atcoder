# coding: utf-8

n = input()
k = input()

x = map(int, raw_input().split())
t = 0

for d in x:
    d_z = abs(d)
    d_k = abs(k-d)
    if d_z > d_k:
        t += d_k * 2
    else:
        t += d_z * 2

print t
