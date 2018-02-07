# coding: utf-8


def x():
    n = input()
    a = map(int, raw_input().split())
    c = 0
    while True:
        for i in range(0, n):
            if a[i] % 2 == 0:
                a[i] /= 2
            else:
                return c
        c += 1

print x()
