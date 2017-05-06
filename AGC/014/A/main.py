# coding: utf-8

a, b, c = map(int, raw_input().split())
cnt = 0

if a == b and b == c:
    if a % 2 == 0 and b % 2 == 0 and c % 2 == 0:
        print -1
    else:
        print 0
    exit()

while True:
    if a % 2 == 0 and b % 2 == 0 and c % 2 == 0:
        cnt += 1
        a_t = a / 2
        b_t = b / 2
        c_t = c / 2
        a = b_t + c_t
        b = a_t + c_t
        c = a_t + b_t
    else:
        break

print cnt
